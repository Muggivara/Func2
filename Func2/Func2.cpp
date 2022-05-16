

#include <iostream>
#include <Windows.h>
using namespace std;

//Написать функцию SetCursor, которая устанавливает координаты и цвет текста.
//Функция принимает три аргумента : координата по X, координата по Y, номер цвета.



void SetCursorPosition(int x, int y, int c)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position;
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(h, position);
	SetConsoleTextAttribute(h, c);
	cout << char(3) << "\n";
}
int main()
{
    SetCursorPosition(5, 7, 12);
   
}



//Написать функцию Line, которую можно будет вызвать так :
//Line(20, '@', 12, true);
//и при этом горизонтальная нарисуется линия, состоящая из 20 «собачек» красного цвета.
//Если передать в последнем параметре false – линия станет вертикальной.




void Line(int x, char sign, int color, bool line)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
    if (line)
        for (int i = 0; i < x; i++)
            cout << sign;
    else
        for (int j = 0; j < x; j++)
            cout << sign << "\n";
}
int main()
{
    Line(20, '@', 12,false);
}