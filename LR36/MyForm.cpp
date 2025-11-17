#include "MyForm.h"
#include <Windows.h>
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace LR36;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}
