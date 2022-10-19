nomeprograma = retangulo
flags = -Wall


all: compila


compila: main.o retangulo.o
	g++ $(flags) main.o Retangulo.o -o $(nomeprograma) 	

main.o: main.cpp
	g++ -c main.cpp $(flags)


retangulo.o: Retangulo.cpp Retangulo.hpp
	g++ -c Retangulo.cpp $(flags)

clean: 
	rm -r *.o
	rm -r $(nomeprograma)
