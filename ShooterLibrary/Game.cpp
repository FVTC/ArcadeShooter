#include "ShooterLibrary.h"

namespace ShooterLibrary
{
	Game::Game()
	{
		SetScreenResolution(1600, 900);
		SetFullScreen(false);
		InitializeScreenManager();
	}


	void Game::Draw(const GameTime *pGameTime)
	{
		DisplayFrameRate();

		KatanaEngine::Game::Draw(pGameTime);
	}
}