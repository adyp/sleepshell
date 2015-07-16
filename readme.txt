-----BEGIN PGP SIGNED MESSAGE-----


Sleep Dummy Shell (SleepShell).
Copyright ©2004,2005 by Mario A. Valdez-Ramirez
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


=========================================
2005/12/01.


=========================================
* About the Sleep Dummy Shell v0.0.2.

This is a simple do-nothing, sleep-forever program that can be used
as a login shell (in Linux or Unix) to keep the connection open but
without interactive shell. We use it to create SSH accounts for users
who will only use them for SSH-tunneling; to create an encrypted
tunnel to our servers (for example to connect securely to database
servers like mySQL, PostgreSQL, etc).

Most restricted shells still allow execution of local commands from
the SSH account. Setting the account shell to something like
/bin/false (or any other simple programs) usually won't work because
the tunnel is closed as soon as the program finish its execution.
Sleep Dummy Shell just sleeps until its execution is terminated by
the user or the tunnel is closed.

The main page of the Sleep Dummy Shell is:
http://www.mariovaldez.net/software/sleepshell/


=========================================
* Features of the Sleep Dummy Shell program.

* Compiled, no scripting runtime needed.
* For Linux and other Unix.
* Minimal memory and CPU time consumption.
* Simple to install.
* Open source. Released under the GPL license.

The Sleep Dummy Shell is the perfect solution for extranet, intranet
and public hosting providers who wish to provide their customers with
SSH accounts for encripted tunneling, without worrying about extra
security.


=========================================
* Download the Sleep Dummy Shell program.

The SleepShell is available as a tar.gz package at
http://www.mariovaldez.net/software/sleepshell/files/

Also you can find ther the Readme (readme.txt), Changelog
(version.txt), checksums (checksums.txt) and license (license.txt)
files.
 

=========================================
* Questions, comments, suggestions.

Don't hesitate to contact me by email (mario@mariovaldez.org).




-----BEGIN PGP SIGNATURE-----
Version: PGP 8.0

iQCVAwUBQ4+u8DpHuYe8JiHtAQF98AP+Ms1KBoNMh+QU9gZuMGENRAFQ/ToMzBri
4FCQdzh9p3BT26GPIqDtzaNK2Lq33q2N0OetuYMQs01hN1tMOSmz92oN/jdy7n3l
BrbFNaiWrTplGGmHplNw2fe5oOkdnOFNgztQyZmgYE+d47nD2NI70cDjnHkxgvvk
enTvQDdZFjY=
=yqRq
-----END PGP SIGNATURE-----
