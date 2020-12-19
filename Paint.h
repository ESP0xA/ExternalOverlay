#pragma once

#include <d3d9.h>
#include <d3dx9.h>
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

class Paint
{
private:
	IDirect3D9Ex* d3dObject = NULL;
	IDirect3DDevice9Ex* d3dDevice = NULL;
	D3DPRESENT_PARAMETERS d3dparams;
	ID3DXFont* d3dFont = 0; 
	HWND TargetHWND;
	int width, height;

	int init(HWND hWND);
	void drawText(char* String, int x, int y, int a, int r, int g, int b);

public:
	Paint();
	Paint(HWND hWnd, HWND targetWnd, int width, int height);
	int render();
};

