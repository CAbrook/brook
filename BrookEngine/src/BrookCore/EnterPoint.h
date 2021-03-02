#pragma once


#ifdef BE_PLATFROM_WINDOWS

extern BrookEngine::Application* BrookEngine::CreateApplication();

int main(int argc,char** argv)
{
	printf("BrookEngine Start\n");
	auto app = BrookEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif // BE_PLATFROM_WINDOWS
