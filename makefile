cc = gcc
target = hw2
objects = Main.o Print.o Count.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

$(objects) : header.h

.PHONY : clean
clean :
	rm $(target) $(objects)
