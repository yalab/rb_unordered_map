require 'mkmf'
$CXXFLAGS += " -std=c++11 "
$CFLAGS += "-g -Wall"
$DEBUG = true
create_makefile("unordered_map")
