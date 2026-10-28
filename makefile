a.out :main.o push.o pop.o priority.o
        gcc main.o push.o pop.o priority.o
main.o : main.c
        gcc -c main.c
push.o : push.c
        gcc -c push.c
pop.o : pop.c
        gcc -c pop.c
priority.o : priority.c
        gcc -c priority.c
