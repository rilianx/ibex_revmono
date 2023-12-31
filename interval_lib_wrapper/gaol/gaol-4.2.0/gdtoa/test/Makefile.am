# /****************************************************************
# Copyright (C) 1998, 2000 by Lucent Technologies
# All Rights Reserved
#
# Permission to use, copy, modify, and distribute this software and
# its documentation for any purpose and without fee is hereby
# granted, provided that the above copyright notice appear in all
# copies and that both that the copyright notice and this
# permission notice and warranty disclaimer appear in supporting
# documentation, and that the name of Lucent or any of its entities
# not be used in advertising or publicity pertaining to
# distribution of the software without specific, written prior
# permission.
#
# LUCENT DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
# INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS.
# IN NO EVENT SHALL LUCENT OR ANY OF ITS ENTITIES BE LIABLE FOR ANY
# SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
# IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
# ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
# THIS SOFTWARE.
#
# ****************************************************************/

CC = @CC@

AM_CFLAGS = -g -I..

LDADD = getround.o -lgdtoa -lm
AM_LDFLAGS = -L.. -L../.libs

INFFIX = | sed 's/[Ii][Nn][Ff][intyINTY]*/Infinity/g'

check_PROGRAMS = dt dItest ddtest dtest ftest Qtest xLtest xtest ddtestsi dItestsi strtodt strtodtnrp

TESTS = gdtoatests.sh

strtopddSI.o: strtopddSI.c ../strtopdd.c
strtorddSI.o: strtorddSI.c ../strtordd.c
strtodISI.o:  strtodISI.c ../strtodI.c
strtoIddSI.o: strtoIddSI.c ../strtoIdd.c
strtoIdSI.o: strtoIdSI.c ../strtoId.c

ddtestsi$(EXEEXT): ddtest.o strtopddSI.o strtorddSI.o strtoIddSI.o getround.o
	$(CC) $(AM_CFLAGS) -o ddtestsi ddtest.o strtopddSI.o strtorddSI.o strtoIddSI.o $(AM_LDFLAGS) $(LDADD) 
dItestsi$(EXEEXT): dItest.o strtodISI.o strtoIdSI.o getround.o 
	$(CC) $(AM_CFLAGS) -o dItestsi dItest.o strtodISI.o strtoIdSI.o $(AM_LDFLAGS) $(LDADD) 


## On Intel (and Intel-like) systems using extended-precision registers
## for double-precision (C type double) computations that sometimes suffer
## double rounding errors, the test below involving strtodt generally shows
## five lines of unexpected results.  Variant strtodtnrp uses ../strtodrnp.c
## (which does all computations in integer arithmetic) and should show no
## unexpected results.

strtodtnrp_DEPENDENCIES = strtodt.o 
strtodtnrp_SOURCES = strtodt.c ../strtodnrp.c 



# xQtest generates cp commands that depend on sizeof(long double).
# See the source for details.  If you know better, create Q.out,
# x.out and xL.out by copying the relevant *.ou0 or *.ou1 files
# to the corresponding .out files.  In short, the *.ou0 files are
# for long double == double; x.ou1 and xL.ou1 are for
# long double == extended (a la 80x87 and MC680x0), and Q.ou1 is
# for long double == quad.

Q.out x.out xL.out:
	$(CC) -o xQtest xQtest.c
	./xQtest | sh
	rm -f xQtest xQtest.o

xs0 = README Qtest.c dItest.c ddtest.c dtest.c dt.c ftest.c getround.c \
	strtoIdSI.c strtoIddSI.c strtodISI.c strtodt.c strtopddSI.c \
	strtorddSI.c xLtest.c xQtest.c xtest.c rtestnos testnos testnos1 \
	testnos3 dI.out dIsi.out ddsi.out dd.out dtst.out d.out f.out \
	x.ou0 xL.ou0 x.ou1 xL.ou1 Q.ou0 Q.ou1 makefile

xsum.out: xsum0.out $(xs0)
	xsum $(xs0) >xsum1.out
	cmp xsum0.out xsum1.out && mv xsum1.out xsum.out || diff xsum[01].out

clean-local:
	rm -f xsum.out xsum1.out zap x.out xL.out Q.out
	rm -rf bad

