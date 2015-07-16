/*
Sleep Dummy Shell (SleepShell).
Copyright ©2004, 2005 by Mario A. Valdez-Ramirez
http://www.mariovaldez.net/

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.

You can contact Mario A. Valdez-Ramirez by email
at mario@mariovaldez.org or paper mail at
Olmos 809, San Nicolas, NL. 66495, Mexico.
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define SS_SLEEPTIME 10

#define TICKER_LEN 4
static const char ticker_chars[TICKER_LEN]="|/-\\";

int main() {
  char *ssh_connection;
  char *ssh_client;
  char *ssh_tty;
  int i;
  
  ssh_connection = getenv ("SSH_CONNECTION");
  ssh_client = getenv ("SSH_CLIENT");
  ssh_tty = getenv ("SSH_TTY");
  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  if (ssh_connection && ssh_client) {
    printf ("Connection: %s\nClient: %s\nTerminal: %s\n\n", ssh_connection, ssh_client, ssh_tty);
  }
  i=0;
  while (1) {
    sleep (SS_SLEEPTIME);
    printf ("%c\r", ticker_chars[i]);
    i = (i + 1) % TICKER_LEN;
    fflush (NULL);
  }

  return 0;	/* should never be reached */
}

