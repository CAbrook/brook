#include<BrookEngine.h>


class Game : public BrookEngine::Application
{
public:
	Game()
	{
	
	}


	~Game()
	{
	
	}

};

//int main()
//{
//	Game* game = new Game();
//	game->Run();
//	delete game;
//}

BrookEngine::Application* BrookEngine::CreateApplication()
{
	return new Game;
}