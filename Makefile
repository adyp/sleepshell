

sleepshell: sleepshell.c
	gcc -O2 -g sleepshell.c -o sleepshell
	strip sleepshell

install: 
	cp sleepshell /usr/local/bin/sleepshell

clean:
	rm -f sleepshell
