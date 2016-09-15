game:		main.o menu.o ground_unit.o marines.o texture.o
			g++ *.o -o game -L SFML/lib -lsfml-graphics -lsfml-window -lsfml-system

main.o:		main.cpp main.h
			g++ -c main.cpp -I SFML/include

ground_unit.o:		ground_unit.cpp ground_unit.h
					g++ -c ground_unit.cpp -I SFML/include

marines.o:		marines.cpp marines.h
				g++ -c marines.cpp -I SFML/include

menu.o:		menu.cpp menu.h
			g++ -c menu.cpp -I SFML/include

texture.o:	texture.cpp texture.h
			g++ -c texture.cpp -I SFML/include

clean:	
			rm -f *.o

mrproper: 	clean
			rm -f game
