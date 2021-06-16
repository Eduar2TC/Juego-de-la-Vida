#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

class Ventana{
public:
    void situaCoordenada(int a, int b){
        HANDLE mueve;
        mueve = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD Posicion;
        Posicion.X = a;
        Posicion.Y = b;
        SetConsoleCursorPosition(mueve, Posicion);
    }

    static void OcultaCursor(){
        HANDLE Posicion;
        Posicion = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO rosruC;
        rosruC.dwSize = 2;
        rosruC.bVisible = FALSE;
        SetConsoleCursorInfo(Posicion, &rosruC);
        //Set console font
        CONSOLE_FONT_INFOEX cfi;
        cfi.cbSize = sizeof(cfi);
        cfi.nFont = 0;
        cfi.dwFontSize.X = 20;  // Width of each character in the font
        cfi.dwFontSize.Y = 20; // Height
        cfi.FontFamily = FF_DONTCARE;
        cfi.FontWeight = FW_NORMAL;
        std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
        SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
    }
};
