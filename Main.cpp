#include "Point.h"
#include "Point2.h"

#include <iostream>
#include <stdlib.h> 
int main()
{
	Point Ptn(2,4);
	Ptn.affiche();
	Ptn.deplace(1,1);
	Ptn.affiche();

	Point2 Ptn2(0,0);
	Ptn2.abs(1);
	Ptn2.ord(2);
	Ptn2.deplace(1, 1);

	system("PAUSE");
	return 0;
}