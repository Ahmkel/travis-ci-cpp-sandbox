all: $(patsubst %.cpp, %.out, $(wildcard tests/*.cpp))

%.out: %.cpp $(wildcard src/*.cpp)
	g++ -o $@ $^ -std=c++11

clean:
	rm -rf ./tests/*.out
