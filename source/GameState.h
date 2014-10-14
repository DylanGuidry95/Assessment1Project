#pragma once
#include "Decl.h"

class GameState
{
	Player *m_player;	  
	Bullet *m_bullets[64]; 
	Enemy  *m_enemys[25];
	Assets *e_assets; 
	int m_padding;	 

public:

	GameState(int a_padding, Assets *a_assets);
	~GameState();

	int GetPadding();

	void SpawnBullet(int a_x, int a_y, float a_speed);
	


	void Update(float a_dt);
	void Draw();

};