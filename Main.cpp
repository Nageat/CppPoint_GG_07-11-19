#include "Point.h"
#include <iostream>
#include <stdlib.h> 
int main()
{
	Point Ptn(2,4);
	Ptn.affiche();
	Ptn.deplace(1,1);
	Ptn.affiche();
	system("PAUSE");
	return 0;
}