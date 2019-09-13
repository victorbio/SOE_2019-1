ola_num_caracs_2: num_caracs.o ola_num_caracs_2.o
	gcc $(CFLAGS) -o ola_num_caracs_2 num_caracs.o ola_num_caracs_2.o
num_caracs.o: num_caracs.c num_caracs.h
	gcc $(CFLAGS) -c num_caracs.c
ola_num_caracs_2.o: ola_num_caracs_2.c num_caracs.h
	gcc $(CFLAGS) -c ola_num_caracs_2.c
clean:
	rm -f *.o ola_num_caracs_2
