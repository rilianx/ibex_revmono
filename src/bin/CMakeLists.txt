add_executable (ibexsolve ibexsolve.cpp parse_args.h)
add_executable (ibexopt ibexopt.cpp parse_args.h)
add_executable (optimizer04 optimizer04.cpp parse_args.h)
target_link_libraries (ibexsolve ibex)
target_link_libraries (ibexopt ibex)
target_link_libraries (optimizer04 ibex)

set_target_properties (ibexsolve PROPERTIES RUNTIME_OUTPUT_DIRECTORY
                                                      "${CMAKE_BINARY_DIR}/bin")
set_target_properties (ibexopt PROPERTIES RUNTIME_OUTPUT_DIRECTORY
                                                      "${CMAKE_BINARY_DIR}/bin")
set_target_properties (optimizer04 PROPERTIES RUNTIME_OUTPUT_DIRECTORY
                                                      "${CMAKE_BINARY_DIR}/bin")
install (TARGETS ibexsolve DESTINATION ${CMAKE_INSTALL_BINDIR}
                           COMPONENT binaries)
install (TARGETS ibexopt DESTINATION ${CMAKE_INSTALL_BINDIR}
                           COMPONENT binaries)
install (TARGETS optimizer04 DESTINATION ${CMAKE_INSTALL_BINDIR}
                           COMPONENT binaries)
