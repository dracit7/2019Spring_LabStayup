
program = test
sourcelist = console.c lib/print.c sys/err.c sys/io.c

$(program): $(sourcelist)
	gcc -o $(program) $(sourcelist)