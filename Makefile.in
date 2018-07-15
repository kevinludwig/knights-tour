all: compile
	g++ -o target/knights_tour target/knights_tour.o
compile: target
	g++ -o target/knights_tour.o -c knights_tour.cpp
target:
	mkdir target
clean:
	rm -rf target 
