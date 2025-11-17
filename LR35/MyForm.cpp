#include "MyForm.h"
#include <Windows.h>
#include<ctime>
#include<cmath>
using namespace LR35;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}
