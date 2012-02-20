# Macros
CC = g++
CCFLAGS = -Wall
INCLUDES = -I /usr/local/boost_1_48_0 -I include/

all: vdpglm 
clean: 
	rm -f ./src/*~ ./include/*~ ./src/\#*\# ./include/\#*\# core *.out
clobber: clean
	rm -f *.o vdpglm

vdpglm: src/vdpglm.cpp include/weighted_datum.hpp include/numerics.hpp
	$(CC) $(CCFLAGS) $(INCLUDES) src/vdpglm.cpp -o vdpglm

#vdpglm.o: src/vdpglm.cpp include/weighted_datum.hpp include/numerics.hpp
#	$(CC) $(CCFLAGS) $(INCLUDES) -c src/vdpglm.cpp
