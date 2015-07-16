
CC?=cc

sleepshell: sleepshell.c
	$(CC) -O2 -g sleepshell.c -o sleepshell
	strip sleepshell

install: 
	cp sleepshell /usr/local/bin/sleepshell

clean:
	rm -f sleepshell
