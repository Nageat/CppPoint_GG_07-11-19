#pragma once
class Point
{
	float nX;
	float nY;
	static int nb_pts;
public:
	Point(float x, float y, int cpt);
	~Point();

	void deplace(float x, float y);
	void affiche();
	//void affiche();
};

