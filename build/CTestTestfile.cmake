# CMake generated Testfile for 
# Source directory: /workspaces/laba
# Build directory: /workspaces/laba/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(MyProjectTests "/workspaces/laba/build/tests")
set_tests_properties(MyProjectTests PROPERTIES  _BACKTRACE_TRIPLES "/workspaces/laba/CMakeLists.txt;34;add_test;/workspaces/laba/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
