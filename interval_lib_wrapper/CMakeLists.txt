include (ibex-install-3rd)

subdir_list (INTERVAL_LIB_LIST RELATIVE)

if(WIN32)
  set(INTERVAL_LIB "filib" CACHE STRING "Library used for interval arithmetic")
else()
  set(INTERVAL_LIB "gaol" CACHE STRING "Library used for interval arithmetic")
endif()
set_property(CACHE INTERVAL_LIB PROPERTY STRINGS ${INTERVAL_LIB_LIST})

list(FIND INTERVAL_LIB_LIST ${INTERVAL_LIB} is_valid)
if (is_valid LESS 0)
  message (FATAL_ERROR "Unsupported library for interval arithmetic: ${INTERVAL_LIB}")
else ()
  message (STATUS "Library for interval arithmetic: ${INTERVAL_LIB}")
endif ()

# INTERVAL_LIB in upper case
string (TOUPPER "${INTERVAL_LIB}" INTERVAL_LIB_UPPER)

# Absolute path of wrapper directory
set (ITVLIB_ABSPATH ${CMAKE_CURRENT_SOURCE_DIR}/${INTERVAL_LIB})

# Go into wrapper directory
add_subdirectory (${INTERVAL_LIB})

# The proper name of the interval lib
set (INTERVAL_LIB_NAME ${${INTERVAL_LIB_UPPER}_NAME} PARENT_SCOPE)

# The name of the target that ibex should depend on
set (INTERVAL_LIB_TARGET ${${INTERVAL_LIB_UPPER}_TARGET} PARENT_SCOPE)

# The version (if available) of the interval lib
set (INTERVAL_LIB_VERSION ${${INTERVAL_LIB_UPPER}_VERSION} PARENT_SCOPE)

# Check that mandatory files exist and add them in IBEX_SRC
set (ITVLIB_REQUIRED_FILES ibex_IntervalLibWrapper.cpp ibex_IntervalLibWrapper.h
                                                    ibex_IntervalLibWrapper.inl)

set (PRE "Error with wrapper of interval library ${INTERVAL_LIB}")
foreach (f ${ITVLIB_REQUIRED_FILES})
  if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${INTERVAL_LIB}/${f})
    message (FATAL_ERROR "${PRE}, it should have a file named ${f}")
  else ()
    list (APPEND IBEX_SRC ${CMAKE_CURRENT_SOURCE_DIR}/${INTERVAL_LIB}/${f})
  endif ()
endforeach ()

# Add directory of wrapper in list of included directory
list (APPEND IBEX_INCDIRS ${ITVLIB_ABSPATH})

# Propagate new values of list to parent scope
set (IBEX_INCDIRS ${IBEX_INCDIRS} PARENT_SCOPE)
set (IBEX_SRC ${IBEX_SRC} PARENT_SCOPE)
