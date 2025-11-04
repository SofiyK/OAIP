#include"MyForm.h"
#include<ctime>
#include <cstdlib>
#include <Windows.h>


using namespace LR32;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}