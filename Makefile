truetable:	truetable.cpp
		g++ truetable.cpp -o truetable
run:		truetable
		./truetable A.B
		./truetable A.B.C
		./truetable A.B.C.D
		./truetable A+B
		./truetable A+B+C
		./truetable A+B+C+D
clean:		rm -f truetable
