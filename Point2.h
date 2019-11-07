#pragma once
class Point2
{
	float nX;
	float nY;
public:
	Point2(float x, float y);
	~Point2();
	float abs(float x);
	float ord(float y);
	void deplace(float Y, float X);


};

