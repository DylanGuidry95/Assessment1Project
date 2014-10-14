#include "EnemyManager.h"
#include "AIE.h"


void EnemyManager::MoveE()
{
	for (int i = 0; i < N_ENEMIES; ++i)
		enemies[i].DrawE();
}

void EnemyManager::DrawE()
{
	unsigned a_sprite = CreateSprite("./images/invaders/invaders_1_00.png", 64, 32, true);

	const unsigned N_ENEMIES = 30;
	const unsigned N_E_COLS = 6;
	float eX = 672 * 0.3f;
	float eY = 780 * 0.8f;
	Enemy aliens[N_ENEMIES];

	float spacing = 24;
	float fW = 134 / 3 + spacing;
	float fH = 115 / 3 + spacing;

	for (int i = 0; i < N_ENEMIES; ++i)
	{
		aliens[i] = Enemy(a_sprite, eX + fW* (i % N_E_COLS), eY + fH*(i / N_E_COLS), 10, 10,0, 780,60.f);
	}
}

void EnemyManager::UpdateE(float dt)
{
	
	
	bool advance = false;

	for (int i = 0; i < N_ENEMIES; ++i)
	{
		enemies[i].DrawE();
		if (enemies[i].UpdateE(dt))
		{
			advance = true;
		}
	}

	if (advance)
	{
		for (int i = 0; i < N_ENEMIES; ++i)
		{
			enemies[i].AdvanceE();
		}

	}


}