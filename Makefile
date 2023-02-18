CXX=/usr/bin/g++
CXXFLAGS=-Wall -std=c++20 -g
CXXINCLUDE=-I/usr/include/c++/11 

CPPCHECK_ANALYSER=/usr/bin/cppcheck
CPPCHECK_PARAMS=--enable=all --suppressions-list=cppcheck-suppression-list --std=c++20 --inline-suppr --template "{file}({line}): {severity} ({id}): {message}"

all: hello_world

hello_world: 
	$(CPPCHECK_ANALYSER) $(CPPCHECK_PARAMS) ./basics/

	$(CXX) $(CXXFLAGS) -o ./bin/hello_world ./basics/hello_world.cc	
	$(CXX) $(CXXFLAGS) -o ./bin/hello_name ./basics/hello_name.cc
	$(CXX) $(CXXFLAGS) -o ./bin/display_right_angle_triangle ./basics/display_right_angle_triangle.cc
	$(CXX) $(CXXFLAGS) -o ./bin/swap_2_numbers ./basics/swap_2_numbers.cc
	$(CXX) $(CXXFLAGS) -o ./bin/convert_variable_types ./basics/convert_variable_types.cc
	$(CXX) $(CXXFLAGS) -o ./bin/find_prev_character ./basics/find_prev_character.cc
	$(CXX) $(CXXFLAGS) -o ./bin/find_hr_min_sec ./basics/find_hr_min_sec.cc
	$(CXX) $(CXXFLAGS) -o ./bin/area_of_sphere ./basics/area_of_sphere.cc
	
	

clean:
	rm ./bin/obj/*.*