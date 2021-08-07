//
// Created by Jan on 8/6/2021.
//

#ifndef ROCKY_CORE_H
#define ROCKY_CORE_H


#ifdef ROCKY_PLATFORM_WINDOWS
	#ifdef ROCKY_BUILD_DLL
		#define ROCKY_API __declspec(dllexport)
	#else
		#define ROCKY_API __declspec(dllimport)
	#endif
#else
	#error ROCKY only supports Windows!
#endif

#endif //ROCKY_CORE_H
