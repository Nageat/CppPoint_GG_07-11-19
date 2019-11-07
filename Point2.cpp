#include <iostream>
#include <string>
#include "Point2.h"
using namespace std;

Point2::Point2(float x, float y)
{
	nX = x;
	nY = y;
}

Point2::~Point2()
{
}

float Point2::abs(float x)
{
	nX = x;
	return nX;
}

float Point2::ord(float y)
{
	nY = y;
	return nY;
}

void Point2::deplace(float Y, float X)
{
	this->abs(Y);
	this->ord(X);
}




