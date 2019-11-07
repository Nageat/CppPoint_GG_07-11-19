#pragma once
class Point
{
	float nX;
	float nY;
public:
	Point(float x, float y);
	~Point();

	void deplace(float x, float y);
	void affiche();
	//void affiche();
};

