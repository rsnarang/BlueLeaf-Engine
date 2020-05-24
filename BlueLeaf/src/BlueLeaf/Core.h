#pragma once

#ifdef BL_PLATFORM_WINDOWS
	#ifdef BL_BUILD_DLL
		#define BLUELEAF_API __declspec(dllexport)
	#else
		#define BLUELEAF_API __declspec(dllimport)
	#endif // BL_BUILD_DLL
	#else
		#error BlueLeaf only supports Windows!
#endif