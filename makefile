GCC=g++
CFLAGS=
INC=
LIB=
FILES=GConverter.cpp GConverter.h main.cpp

default:	main

main: $(FILES)
	$(GCC) $(FILES) $(INC) $(LIB) -o accelToG

clean:
	rm accelToG
