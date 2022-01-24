all: 3DMathEngineProject.hpp 3DMathEngineProject.cpp main.cpp
	g++ -std=c++11 -std=c++2a -o 3dmath.exe 3DMathEngineProject.cpp main.cpp -I. -L.

clean: 
	rm -rf *.exe
