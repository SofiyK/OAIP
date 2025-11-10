#include"Form1.h"
#include <Windows.h>
#define _USE_MATH_DEFINES
#include<math.h>

using namespace Project2;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Form1);
    return 0;
}