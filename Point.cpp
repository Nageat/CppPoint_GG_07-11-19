#include <iostream>
#include <string>
#include "Point.h"
using namespace std;
int Point::nb_pts = 0;
Point::Point(float x, float y, int nb)
{
	nX = x;
	nY = y;
	nb_pts++;//Le competeur +1 a chaque intération 
}

Point::~Point()
{
}

void Point::deplace(float x, float y)
{
	nX += x;
	nY += y;
}

void Point::affiche()
{//Affichage

	cout << "X : " << nX << " y : " << nY << endl;
	cout << "Nb de points  :" << nb_pts <<  endl;

}




