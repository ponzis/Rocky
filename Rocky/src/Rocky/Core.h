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

#ifdef ROCKY_ENABLE_ASSERTS
	#define ROCKY_ASSERT(x, ...) { if(!(x)) { ROCKY_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define ROCKY_CORE_ASSERT(x, ...) { if(!(x)) { ROCKY_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define ROCKY_ASSERT(x, ...)
	#define ROCKY_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#endif //ROCKY_CORE_H
