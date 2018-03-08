GCC=gcc
CFLAGS=
INC=
LIB=
FILES=GConverter.cpp GConverter.h main.cpp

default:	main

main: $(FILES)
	$(GCC) main.cpp $(INC) $(LIB) -o accelToG


