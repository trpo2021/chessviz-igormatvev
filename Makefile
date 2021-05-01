
run: chess.o bibl.o
	g++ chess.o bibl.o -o run

chess.o: chess.cpp
	g++ -c chess.cpp

bibl.0: bibl.cpp bibl.h
	g++ -c bibl.cpp

clean:
	rm *.o run
