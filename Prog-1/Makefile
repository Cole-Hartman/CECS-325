
output: main.o Deck.o Card.o
	g++ main.o Deck.o Card.o -o output

main.o: main.cpp
	g++ -c main.cpp

deck.o: Deck.cpp Deck.h
	g++ -c Deck.cpp

card.o: Card.cpp Card.h
	g++ -c Card.cpp

clean:
	rm *.o output
