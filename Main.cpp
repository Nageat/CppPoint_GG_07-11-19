#include "Point.h"
#include "Point2.h"

#include <iostream>
#include <stdlib.h> 
int main()
{
	Point Ptn(2, 4, 0);//init de X, Y et du cpt
	Point PtnTestNbPoint(2, 4, 0);//Point pour voir si tout fonctionne 
	Ptn.affiche();//l'affiche 
	Ptn.deplace(1,1);//Le dépalcement 
	Ptn.affiche();

	Point2 Ptn2(0,0,90);//Le second point X, Y et de l'angle 
	Ptn2.abs(1);
	Ptn2.ord(2);
	Ptn2.deplace(1, 1);
	Ptn2.Rotate(90);

	system("PAUSE");
	return 0;
}