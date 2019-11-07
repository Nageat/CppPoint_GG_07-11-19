#include <iostream>
#include <string>
#include <cmath>        
#include "Point2.h"
using namespace std;
const float pi = 3.14;		// pi

Point2::Point2(float x, float y, float angle)
{
	//CONSTRUCT
	nX = x;
	nY = y;
	nAngle = angle;
}

Point2::~Point2()
{
}

float Point2::abs(float x)
{
	//Init de X absise 
	nX = x;
	return nX;
}

float Point2::ord(float y)
{
	//Init de Y ordonné 
	nY = y;
	return nY;
}

void Point2::deplace(float Y, float X)
{
	//Deplacement 
	this->abs(Y);
	this->ord(X);
}

void Point2::Rotate(float rotat)
{
	//Rotation 
	if (rotat < 360 && rotat > 0) {
		nAngle = rotat;
	}
}


