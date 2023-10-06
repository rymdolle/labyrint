all: labyrint

labyrint: labyrint.cpp
	g++ -std=c++17 -o $@ $<

clean:
	rm -f labyrint
