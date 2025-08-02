#pragma once

#ifdef MC_PLATFORM_WINDOWS
	#ifndef  MC_BUILD_DLL
		#define MERCURY_API __declspec(dllexport)
	#else
		#define MERCURY_API __declspec(dllimport)
	#endif
#else
	#error Mercury supports Windows only!
#endif
