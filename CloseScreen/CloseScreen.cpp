// CloseScreen.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <Windows.h>

#pragma comment(linker, "/subsystem:\"windows\" /entry:\"wmainCRTStartup\"" )
int wmain()
{
	HWND hwnd = FindWindow(0, 0);
	SendMessage(hwnd, WM_SYSCOMMAND, SC_MONITORPOWER, 2);
    std::cout << "Hello World!\n";
	return 0;
}
