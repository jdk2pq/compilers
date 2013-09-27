
all: turtle_jdk2pq eins.ps

eins.ps: eins.tlt turtle_jdk2pq
	./turtlturtle_jdk2pq_jdk2pqe < eins.tlt > eins.ps

lex.yy.o:  lex.yy.c turtle_jdk2pq.tab.h symtab.h
	gcc -c lex.yy.c

lex.yy.c: turtle_jdk2pq.l
	flex turtle_jdk2pq.l
	
turtle_jdk2pq.tab.h: turtle_jdk2pq.y
	bison -d turtle_jdk2pq.y --debug --verbose
	
turtle_jdk2pq.tab.c: turtle_jdk2pq.y
	bison -d turtle_jdk2pq.y --debug --verbose
	
turtle_jdk2pq.tab.o: turtle_jdk2pq.tab.c symtab.h
	gcc -c turtle_jdk2pq.tab.c

turtle_jdk2pq: turtle_jdk2pq.tab.o lex.yy.o symtab.c
	gcc lex.yy.o turtle_jdk2pq.tab.o symtab.c -ll -o turtle_jdk2pq

clean:
	rm -f turtle_jdk2pq lex.* turtle_jdk2pq.tab.* *.o eins.ps

