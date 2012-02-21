# Macros
CC = g++
CCFLAGS = -Wall -Werror -pedantic
#CCFLAGS = -Weffc++

ODIR = obj
SDIR = src
IDIR = include

INCLUDES = -I /usr/local/boost_1_48_0 -I $(IDIR)
TARGET = varreg

_OBJS = vdpglm.o datum.o varreg.o
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

all: vdpglm 
clean: 
	rm -f $(SDIR)/*~ $(IDIR)/*~ $(SDIR)/\#*\# $(IDIR)/\#*\# core *.out
clobber: clean
	rm -f $(ODIR)/*.o ./vdpglm

vdpglm: $(OBJS)
	$(CC) $(CCFLAGS) $(INCLUDES) $(OBJS) -o $(TARGET)

$(ODIR)/%.o: $(SDIR)/%.cpp $(IDIR)/*
	$(CC) $(CCFLAGS) $(INCLUDES) -o $@ -c $<
