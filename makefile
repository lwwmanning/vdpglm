# Macros
CC = g++
CCFLAGS = -Wall -Werror -pedantic
#CCFLAGS = -Weffc++

ODIR = build
SDIR = src
IDIR = include
CDIR = test

INCLUDES = -I /usr/local/boost_1_49_0 -I $(IDIR)
TARGET = $(CDIR)/vreg
TSRC = $(TARGET).cpp

_OBJS = datum.o
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

all: $(TARGET) 
clean: 
	rm -f $(SDIR)/*~ $(SDIR)/\#*\# 
	rm -f $(IDIR)/*~ $(IDIR)/\#*\# 
	rm -f $(CDIR)/*~ $(CDIR)/\#*\#
clobber: clean
	rm -f $(ODIR)/*.o $(TARGET) core *.out

$(TARGET): $(OBJS) $(TSRC)
	$(CC) $(CCFLAGS) $(INCLUDES) $(OBJS) $(TSRC) -o $(TARGET)

$(ODIR)/%.o: $(SDIR)/%.cpp $(IDIR)/*
	mkdir -p $(ODIR)
	$(CC) $(CCFLAGS) $(INCLUDES) -o $@ -c $<
