#pragma once
#include "Enemy.h"
#include "Decl.h"
const unsigned N_ENEMIES = 55;
const unsigned N_E_COLS = 11;

class EnemyManager
{
private:
	Enemy enemies[N_ENEMIES];
	int Difficulty;
	float spacing;
	int xmin, xmax;
	int ymin, ymax;
	int sprite;
public:
	EnemyManager(int sprite, float spacing, int a_xmin, int a_xmax,int a_ymin, int a_ymax);
	void UpdateE(float dt);
	void DrawE();
	void MoveE();
};