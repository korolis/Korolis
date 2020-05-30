#pragma once

#ifdef KLS_PLATFORM_WINDOWS
	#ifdef KLS_BUILD_DLL
		#define KLS_API __declspec(dllexport)
	#else
		#define KLS_API __declspec(dllimport)
	#endif
#else
	#error Only Windows is supported.
#endif