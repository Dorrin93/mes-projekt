#Simple makefile for test purposes

CXX=g++
CXXFLAGS= -Wall -O2 -std=c++11 -g
LIBS= -lm
OUT=main
OBJS=vi_flow

$(OUT): $(OUT).cpp $(OBJS).o
	$(CXX) $(CXXFLAGS) $(LIBS) $^ -o $@

$(OBJS).o:
	$(CXX) $(OBJS).cxx -c $(CXXFLAGS) $(LIBS)


clean:
	rm -f *.o *.dat *.png main

run:
	./main
	gnuplot skrypt.gp
