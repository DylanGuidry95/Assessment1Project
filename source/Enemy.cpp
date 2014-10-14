#include "Enemy.h"
#include "AIE.h"

Enemy :: Enemy(unsigned a_sprite, float a_x, float a_y, 
				float fW, float fH, int a_xMin, int a_xMax, int a_speed)
{
	x = a_x;
	y = a_y;
	iSpriteID = a_sprite;
	speed = a_speed;
	xmin = a_xMin;
	xmax = a_xMax;
	fWidth = fW;
	fHeight = fH;
	direction = right;
}



void Enemy::DrawE()
{
	if (!alive) return;
	MoveSprite(iSpriteID, x, y);
	DrawSprite(iSpriteID);
}

bool Enemy::UpdateE(float dt)
{
	if (!alive) return dead;
	
	x += speed * dt * direction;
	
	return (x < xmin || x > xmax);

	
}



void Enemy :: AdvanceE()
{
		y -= fHeight;
	
		speed *= 1.25f;
	
		if (direction == left)
				direction = right;

		else if (direction == right)
				direction = left;
}

