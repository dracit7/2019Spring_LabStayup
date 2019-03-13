
program = os
sourcelist = console.c lib/print.c sys/err.c sys/io.c lib/command.c
liblist = -lreadline
testlist_IO = lib/print.c sys/err.c sys/io.c testing/testIO.c

$(program): $(sourcelist) $(liblist)
	gcc -o $(program) $(sourcelist) $(liblist)

testIO: $(testlist_IO)
	gcc -o _test $(testlist_IO) && ./_test && rm _test

console: $(sourcelist) $(liblist)
	gcc -o console $(sourcelist) $(liblist) && ./console && rm console