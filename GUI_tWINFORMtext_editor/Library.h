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
//#include <gdiplusheaders.h>
#include "MyForm.h"
using namespace msclr::interop;
//using namespace winrt;
//using namespace Windows::UI::Xaml;
//using namespace Windows::UI::Xaml::Documents;

void GenerateKey(int vk, BOOL bExtended)
{
    KEYBDINPUT  kb = { 0 };
    INPUT       Input = { 0 };
    /* Generate a "key down" */
    if (bExtended) { kb.dwFlags = KEYEVENTF_EXTENDEDKEY; }
    kb.wVk = vk;
    Input.type = INPUT_KEYBOARD;
    Input.ki = kb;
    SendInput(1, &Input, sizeof(Input));
    /* Generate a "key up" */
    ZeroMemory(&kb, sizeof(KEYBDINPUT));
    ZeroMemory(&Input, sizeof(INPUT));
    kb.dwFlags = KEYEVENTF_KEYUP;
    if (bExtended) { kb.dwFlags |= KEYEVENTF_EXTENDEDKEY; }
    kb.wVk = vk;
    Input.type = INPUT_KEYBOARD;
    Input.ki = kb;
    SendInput(1, &Input, sizeof(Input));
    return;
}
#define shift 0x10
#define enter 0x0D
#define po 0x39
#define pc 0x30
#define co 0xDB
#define cc 0xDD

