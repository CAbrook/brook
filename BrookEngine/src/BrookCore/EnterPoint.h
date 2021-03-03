#pragma once
#include"Log.h"

#ifdef BE_PLATFROM_WINDOWS

extern BrookEngine::Application* BrookEngine::CreateApplication();

int main(int argc,char** argv)
{

	BrookEngine::Log::Init();
	BE_CORE_WARN("Initialized Log");
	int a = 5;
	BE_INFO("Hello Var={0}",a);
	printf("BrookEngine Start\n");
	auto app = BrookEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif // BE_PLATFROM_WINDOWS
