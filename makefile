ContBot: scanner.o robot.o lex.yy.c parser.tab.c definiciones.o ast.h ast.cpp
	g++ scanner.o definiciones.o robot.o lex.yy.c parser.tab.c ast.cpp tabla_simbolos.cpp -o ContBot

scanner.o: scanner.cpp parser.tab.c robot.o
	g++ -c scanner.cpp definiciones.cpp robot.o 

definiciones.o:
	g++ -c definiciones.cpp

robot.o: tabla_simbolos.h arb_def.h robot.h robot.cpp variables.h
	g++ -c robot.cpp tabla_simbolos.cpp

lex.yy.c: lexer.l
	flex lexer.l

parser.tab.c: parser.y
	bison -d parser.y

clean:
	rm lex.yy.c parser.tab.c parser.tab.h scanner.o definiciones.o
