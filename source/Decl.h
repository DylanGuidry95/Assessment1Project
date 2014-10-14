#pragma once

#include "Aie.h"

/*
	Throughout this example project, various prefixes are used.

	g_ is for global		    (outside of all functions)
	m_ is for member variable   (in a class definition)
	e_ is an external reference (unmanaged pointer- a pointer we won't delete)
	a_ is for argument          (a function parameter)
*/


const int g_w = 672; //game width
const int g_h = 780; // gmae height

const int g_maxSprites = 64; // number of sprties max
const int g_maxBullets = 64; //number of bullets max
const int g_maxEnemy = 25; //number of bullets max


enum eSpriteFlag { eNone,
				   ePlayer, eShot, eEnemy, 
				   eSize };


// Forward Declarations
class Assets;
class GameState;
class Player;
class Bullet;
class Enemy;
