#pragma once

//  windows

//#define WIN32_LEAN_AND_MEAN  
#define _WIN32_WINNT 0x0500
//#pragma comment(lib , "shell32.lib") // fix linker 
#define _WIN32_WINNT _WIN32_WINNT_VISTA

#include <Windows.h>
#define WIN32_LEAN_AND_MEAN  
//  STL library

#include <iostream>
#include <ostream>
#include <fstream>
#include <msclr/marshal.h>
#include <conio.h>

using namespace msclr::interop;


