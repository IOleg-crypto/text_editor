#pragma once

//  windows

#define WIN32_LEAN_AND_MEAN  
#define _WIN32_WINNT 0x0500
#pragma comment(lib , "shell32.lib") // fix linker 
#define _WIN32_WINNT _WIN32_WINNT_VISTA

#include <Windows.h>

#define WIN32_LEAN_AND_MEAN  
//  STL library

#include <iostream>
/*

#if defined _WIN64 //need to bulid(avoid error)
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
*/
// !LIBRARY_H

