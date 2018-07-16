bin_PROGRAMS = knights_tour
knights_tour_SOURCES = src/knights_tour.cpp src/game_state.cpp src/utils.cpp src/unvisited_degree.cpp src/squares.cpp
AM_CXXFLAGS = -std=c++0x

TESTS = testrunner
check_PROGRAMS = testrunner
testrunner_SOURCES = tests/test_knights_tour.cpp src/utils.cpp src/game_state.cpp src/unvisited_degree.cpp src/squares.cpp
testrunner_CXXFLAGS = @CXXFLAGS@
