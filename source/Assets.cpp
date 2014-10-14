#include "Assets.h"

Assets::Assets()
{
	
	for (int i = 0; i < g_maxSprites; ++i)
	{
		sprites[i] = nullptr;	
		if (i < eSize) assoc[i] = nullptr;
	}
	nSprites = 0;	
}


unsigned Assets::Get(eSpriteFlag s)
{
	
	return *assoc[s];
}


unsigned Assets::LoadSprite(char *path, int w, int h, eSpriteFlag s, bool center)
{
	if (nSprites < 64)
	{
		// Put the sprite ID on the Heap
		unsigned *t = new unsigned(CreateSprite(path, w, h, center));

		sprites[nSprites++] = t;  
		if (s != eNone)	
			assoc[s] = t; // store sprties	

		return *t;  //The sprites are rturned
	}
	return 0;
}

Assets::~Assets()
{
	for (int i = 0; i < g_maxSprites; ++i)
		if (sprites[i])	// check for  a max number of sprtes
		{
			DestroySprite(*sprites[i]);						
			delete sprites[i];
		}
}