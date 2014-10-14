
#if !defined(OSX)
	#include <crtdbg.h>
#endif


#include "Decl.h"
#include "GameState.h"
#include "Assets.h"
#include "Player.h"


int main(int argc, char* argv[])
{
	// Game startup
	Initialise(g_w, g_h, false, "Space Invaders");
	SetBackgroundColour(SColour(0x00, 0x00, 0x00, 0xFF));


	
	Assets *assets = new Assets;
	// Sprites for players and enemies
	assets->LoadSprite("./images/cannon.png",		 64, 32, ePlayer);
	assets->LoadSprite("./images/invaders/invaders_5_00.png", 10, 14, eShot);

	
	GameState *myGame = new GameState(20, assets);


	do
	{
		ClearScreen();
		float dt = GetDeltaTime();

		
		myGame->Update(dt);
		myGame->Draw();

	} while (FrameworkUpdate() == false);


	
	delete myGame;
	delete assets;

	Shutdown();
	return 0;
}
