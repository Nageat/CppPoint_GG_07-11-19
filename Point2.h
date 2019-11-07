#pragma once
class Point2
{
	float nX;
	float nY;
	float nAngle; 
public:
	Point2(float x, float y, float angle);
	~Point2();
	float abs(float x);
	float ord(float y);
	void deplace(float Y, float X);
	void Rotate(float Angle);
	void homothetie(float homo);
};

