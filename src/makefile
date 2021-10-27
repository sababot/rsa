rsa: main.o keygeneration.o encrypt.o decrypt.o
	g++ -std=c++17 main.o keygeneration.o encrypt.o decrypt.o -o rsa

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

keygeneration.o: keygeneration.cpp
	g++ -std=c++17 -c keygeneration.cpp

encrypt.o: encrypt.cpp
	g++ -std=c++17 -c encrypt.cpp

decrypt.o: decrypt.cpp
	g++ -std=c++17 -c decrypt.cpp

clean:
	rm *.o rsa
