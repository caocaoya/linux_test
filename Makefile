
source = main.o  

targ : main.o
	gcc -o main main.o
	
mian.o:
	gcc main.c -c main.o
clear:
	rm -vrf *.o
	rm -vrf main
