#pragma once
#include"Core.h"
namespace BrookEngine
{
	class BROOKENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};
	//在client中定义
	Application* CreateApplication();
}
