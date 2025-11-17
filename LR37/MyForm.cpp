#include "MyForm.h"
#include <Windows.h>
#include<ctime>
#include<cstdlib>
using namespace LR37;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}
