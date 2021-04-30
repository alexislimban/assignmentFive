all: disk.o main.o
gcc -o filesys disk.o main.o

disk:
gcc -c -Wall -g3 -fsanitize=address disk.c

main:
gcc -c -Wall -g3 -fsanitize=address main.c

clean:
rm disk.o main.o filesys
