#include "MyForm.h"
#include <Windows.h>
#define _USE_MATH_DEFINES
#include<cmath>
using namespace LR34;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}
