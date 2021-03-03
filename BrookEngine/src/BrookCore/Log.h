#pragma once

#include<memory>
#include"Core.h"
#include"spdlog/spdlog.h"
namespace BrookEngine
{
	class BROOKENGINE_API Log
	{
	public:

		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
		

	private:
		static std::shared_ptr<spdlog::logger>s_CoreLogger;
		static std::shared_ptr<spdlog::logger>s_ClientLogger;
	};
}

//Core log
#define BE_CORE_ERROR(...)::BrookEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BE_CORE_WARN(...)::BrookEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BE_CORE_INFO(...)::BrookEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BE_CORE_TRACE(...)::BrookEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BE_CORE_FATAL(...)::BrookEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log

#define BE_ERROR(...)::BrookEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define BE_WARN(...)::BrookEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BE_INFO(...)::BrookEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define BE_TRACE(...)::BrookEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BE_FATAL(...)::BrookEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)