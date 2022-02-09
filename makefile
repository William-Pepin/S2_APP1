#Commande mere pour compiler le programme
graphicus: graphicus-01.o canevas.o couche.o forme.o carre.o cercle.o rectangle.o tests.o 
	g++ graphicus-01.o canevas.o couche.o forme.o carre.o cercle.o rectangle.o tests.o -o graphicus

graphicus-01.o: graphicus-01.cpp tests.h forme.h cercle.h rectangle.h carre.h vecteur.h
	g++ -c -g graphicus-01.cpp

canevas.o: canevas.cpp canevas.h forme.h couche.h
	g++ -c -g canevas.cpp

couche.o: couche.cpp couche.h vecteur.h
	g++ -c -g couche.cpp

forme.o: forme.cpp forme.h coordonnee.h
	g++ -c -g forme.cpp

carre.o: carre.cpp carre.h forme.h coordonnee.h
	g++ -c -g carre.cpp

cercle.o: cercle.cpp cercle.h forme.h coordonnee.h
	g++ -c -g cercle.cpp

rectangle.o: rectangle.cpp rectangle.h forme.h coordonnee.h
	g++ -c -g rectangle.cpp

tests.o: tests.cpp tests.h canevas.h cercle.h carre.h rectangle.h vecteur.h couche.h
	g++ -c -g tests.cpp

clean:
	rm *.o graphicus
