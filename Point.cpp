#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

Point::Point(float x, float y)
{
	nX = x;
	nY = y;
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
{

	cout << "X : " << nX << " y : " << nY << endl;

}




