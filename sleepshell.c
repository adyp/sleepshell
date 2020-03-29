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

char* seconds2string(unsigned long seconds);

int main() {
  char *ssh_connection;
  char *ssh_client;
  char *ssh_tty;
  unsigned long int i;
  
  ssh_connection = getenv ("SSH_CONNECTION");
  ssh_client = getenv ("SSH_CLIENT");
  ssh_tty = getenv ("SSH_TTY");
  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  if (ssh_connection && ssh_client) {
    printf ("Connection: %s\nClient: %s\nTerminal: %s\n\n", ssh_connection, ssh_client, ssh_tty);
  }

  i=0;
  while (1) {
    printf ("\rUp for %s [%c]", seconds2string(i * SS_SLEEPTIME), ticker_chars[i % TICKER_LEN]);
    fflush (NULL);
    sleep (SS_SLEEPTIME);
    i++;
  }

  return 0;	/* should never be reached */
}

/* Adapted from https://rosettacode.org/wiki/Convert_seconds_to_compound_duration#C */
char* seconds2string(unsigned long seconds) {
  int i;

  const unsigned long s = 1;
  const unsigned long m = 60 * s;
  const unsigned long h = 60 * m;
  const unsigned long d = 24 * h;
  const unsigned long w =  7 * d;
  const unsigned long y = 365* d;

  const unsigned long coeff[6] = { y, w, d, h, m, s };
  const char units[6][7] = { "year", "week", "day", "hour", "minute", "second" };

  static char buffer[256];
  char* ptr = buffer;

  for ( i = 0; i < 6; i++ )
  {
    unsigned long value;
    value   = seconds / coeff[i];
    seconds = seconds % coeff[i];
    if ( value )
    {
      if ( ptr != buffer )
        ptr += sprintf(ptr, ", ");
      ptr += sprintf(ptr, "%lu %s%s", value, units[i], (value > 1 ? "s" : ""));
    }
  }

  return buffer;
}