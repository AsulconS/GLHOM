CXX=g++
CXX_FLAGS=-std=c++11 -Iinclude
COMPILE_RULE=$(CXX) $(CXX_FLAGS)

LIBS=-lhsgil -lX11 -lGL

PROGS=test01

all: $(PROGS) clean

%: test/%.cpp
	$(COMPILE_RULE) $< -o $@ $(LIBS)

clean:
	rm -rf *.o

clear: clean
	rm -rf $(PROGS)
