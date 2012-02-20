# Macros
CC = g++
CCFLAGS = -Wall

ODIR = obj
SDIR = src
IDIR = include

INCLUDES = -I /usr/local/boost_1_48_0 -I $(IDIR)
TARGET = vdpglm

_OBJS = vdpglm.o
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
