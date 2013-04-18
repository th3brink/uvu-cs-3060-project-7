all: parta partb partc partd
parta : parta.c
	gcc -g -Wall -pthread parta.c -o parta
partb : partb.c
	gcc -g -Wall -pthread partb.c -o partb
partc : partc.c
	gcc -g -Wall -pthread partc.c -o partc
partd : partd.c
	gcc -g -Wall -pthread partd.c -o partd
