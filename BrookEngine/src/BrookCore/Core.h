#pragma once

#ifdef BE_PLATFROM_WINDOWS
	#ifdef BE_BUILD_DLL
		#define BROOKENGINE_API __declspec(dllexport)
	#else 
		#define BROOKENGINE_API __declspec(dllimport)
	#endif // BE_BULID_DLL
#else
#error This ENGINE ONLY SUPPORT WINDOWS
#endif // BE_PLATFROM_WINDOWS
