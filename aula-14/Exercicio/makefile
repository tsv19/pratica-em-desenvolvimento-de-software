parametrosCompilacao=-Wall #-Wshadow
nomeAula=aula

all: $(nomeAula)

$(nomeAula): main.o Ponto.o Trajeto.o TrajetoEuclidiano.o TrajetoManhattan.o Console.o
	g++ -o $(nomeAula) main.o Ponto.o Trajeto.o TrajetoEuclidiano.o TrajetoManhattan.o Console.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Pessoa.o: Ponto.hpp Ponto.cpp
	g++ -c Ponto.cpp $(parametrosCompilacao)

Trajeto.o: Trajeto.hpp Trajeto.cpp
	g++ -c Trajeto.cpp $(parametrosCompilacao)

TrajetoEuclidiano.o: TrajetoEuclidiano.hpp TrajetoEuclidiano.cpp
	g++ -c TrajetoEuclidiano.cpp $(parametrosCompilacao)

TrajetoManhattan.o: TrajetoManhattan.hpp TrajetoManhattan.cpp
	g++ -c TrajetoManhattan.cpp $(parametrosCompilacao)

Console.o: Console.hpp Console.cpp
	g++ -c Console.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomeAula)
