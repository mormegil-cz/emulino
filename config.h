#ifndef __CONFIG_H
#define __CONFIG_H

#if _MSC_VER

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#define __attribute__(x)

#else

#define HANDLE int

#endif

#endif
