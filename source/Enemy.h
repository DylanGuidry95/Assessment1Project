#pragma once
#include "Decl.h"

enum Direction { left = -1, right = 1};
enum STATUS {none, advance, invade, dead};

class Enemy
{
private:
	Direction direction;
	float x;
	float y;
	int speed;
	float fWidth;
	float fHeight;
	int xmin;
	int xmax;
	unsigned int iSpriteID;


public:
	bool alive = false;
	
	Enemy(unsigned a_sprite, float a_x, float a_y,
		float fW, float fH, int a_xMin, int a_xMax, int a_speed);

	Enemy();

	bool UpdateE(float dt);
	void DrawE();
	void AdvanceE();
};