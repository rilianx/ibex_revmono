# Install script for directory: /home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devtools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ibex/3rd" TYPE STATIC_LIBRARY FILES "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0-build/libgdtoa.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devtools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ibex/3rd/gdtoa" TYPE FILE FILES
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gdtoa/arith.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gdtoa/gdtoa.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devtools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ibex/3rd/gaol" TYPE FILE FILES
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_allocator.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_assert.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_common.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_config.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0-build/gaol/gaol_configuration.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_double_op_apmathlib.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_double_op_crlibm.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_double_op.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_eval_stack.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_exact.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_exceptions.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_expression.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_expr_eval.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_expr_visitor.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_flags.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_flt_output.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_fpu_fenv.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_fpu.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_init_cleanup.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_interval2f.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_intervalf.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_interval_fpu.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_interval.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_interval_parser.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_interval_sse.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_limits.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_parameters.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_parser.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_port.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_profile.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_version.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devtools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ibex/3rd/gaol/sysdeps" TYPE FILE FILES
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/sysdeps/gaol_exact_c99.h"
    "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/sysdeps/gaol_exact_msvc.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devtools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ibex/3rd/gaol" TYPE FILE FILES "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0/gaol/gaol_interval2f.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devtools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ibex/3rd" TYPE STATIC_LIBRARY FILES "/home/ignacio/ibex_revmono/interval_lib_wrapper/gaol/gaol-4.2.0-build/libgaol.a")
endif()

