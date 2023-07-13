# Install script for directory: /home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ibex/3rd" TYPE FILE FILES "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ibex/3rd/soplex" TYPE FILE FILES
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/array.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/basevectors.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/classarray.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/clufactor.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/clufactor_rational.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/cring.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/dataarray.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/datahashtable.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/datakey.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/dataset.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/didxset.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/dsvectorbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/dsvector.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/dvectorbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/dvector.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/exceptions.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/gzstream.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/idlist.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/idxset.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/islist.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/lpcolbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/lpcol.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/lpcolsetbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/lpcolset.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/lprowbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/lprow.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/lprowsetbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/lprowset.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/mpsinput.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/nameset.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/notimer.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/random.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/rational.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/ratrecon.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/slinsolver.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/slinsolver_rational.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/slufactor.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/slufactor_rational.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/solbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/sol.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/sorter.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxalloc.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxautopr.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxbasis.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxboundflippingrt.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxdantzigpr.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxdefaultrt.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxdefines.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxdevexpr.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxequilisc.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxfastrt.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxfileio.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxgeometsc.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxgithash.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxharrisrt.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxhybridpr.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxid.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxleastsqsc.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxlpbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxlp.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxmainsm.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxout.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxparmultpr.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxpricer.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxratiotester.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxscaler.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxsimplifier.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxsolver.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxstarter.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxsteepexpr.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxsteeppr.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxsumst.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxvectorst.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxweightpr.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/spxweightst.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/ssvectorbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/ssvector.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/stablesum.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/statistics.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/svectorbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/svector.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/svsetbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/svset.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/timerfactory.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/timer.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/unitvectorbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/unitvector.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/updatevector.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/usertimer.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/validation.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/vectorbase.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/vector.h"
    "/home/iaraya/ibex2020/lp_lib_wrapper/soplex/soplex-4.0.2/src/soplex/wallclocktimer.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevtoolsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ibex/3rd" TYPE STATIC_LIBRARY FILES "/home/iaraya/ibex2020/lib/libsoplex.a")
endif()

