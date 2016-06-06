#include "3DEngine_math.h"
#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <mmsystem.h>
using namespace std;
using namespace Math;

HINSTANCE ghInstance = 0;
HWND ghWnd = 0;

int Game_Init()
{
	return 1;
}
int Game_ShutDown()
{
	return 1;
}
int Game_Main()
{
	return 1;
}
LRESULT CALLBACK WinProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;
	switch (msg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	case WM_PAINT:
		hdc = BeginPaint(hWnd,&ps);
		EndPaint(hWnd,&ps);
		return 0;
		break;
	case WM_CREATE:
		//³õÊ¼»¯´úÂë
		break;
	default:
		break;
	}
	return DefWindowProc(hWnd, msg, wParam, lParam);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE prev, LPSTR lpcmdLine, int cndShow)
{
	WNDCLASS wdc;
	HWND hwnd;
	MSG msg;

	wdc.cbClsExtra = 0;
	wdc.cbWndExtra = 0;
	wdc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	wdc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wdc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wdc.lpfnWndProc = WinProc;
	wdc.lpszClassName = L"1";
	wdc.lpszMenuName = NULL;
	wdc.hInstance = hInstance;
	wdc.style = CS_DBLCLKS | CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
	if (!RegisterClass(&wdc))
		return 0;

	if (!(hwnd = CreateWindow(L"1",NULL, WS_OVERLAPPED | WS_SYSMENU | WS_CAPTION,
		0, 0, 640, 480, NULL, NULL, hInstance, NULL)))
	{
		return 0;
	}
	ghWnd = hwnd;
	ghInstance = hInstance;
	ShowWindow(hwnd, SW_SHOW);
	Game_Init();
	while (1)
	{
		if (PeekMessage(&msg, hwnd, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT)
				break;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		Game_Main();

	}
	Game_ShutDown();
	return (msg.wParam);
}

