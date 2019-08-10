#include <Windows.h>

//FINAL WEAPON!!
//some Integrity is bad.

BOOL CALLBACK EnumWindowsProc(_In_ HWND   hwnd, _In_ LPARAM lParam) {
	RECT rt = { 0, };

	GetWindowRect(hwnd,&rt);

	return MoveWindow(hwnd, 0, 0, rt.right - rt.left, rt.bottom - rt.top, TRUE);
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	
	EnumWindows(EnumWindowsProc, 0);

	return 0;

}