#pragma once
#ifdef PA_PLATFORM_WINDOWS
	#ifdef PAPER_BUILD_DLL
		#define PAPER_API __declspec(dllexport)
	#else
		#define PAPER_API __declspec(dllimport)
	#endif // PAPER_BUILD_DLL
#else 
		#error Hazel only supports Windows!
#endif // PA_PLATFORM_WINDOWS
