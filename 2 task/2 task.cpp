#include <iostream>
#include <windows.h>
using namespace std;

void DrawLine(int x, string text, int color, bool choise)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	if (choise == true)
	{
		for (int i = 0; i < x; i++)
		{
			SetConsoleTextAttribute(h, 12);
			cout << text;
		}
	}
	else
	{
		for (int i = 0; i < x; i++)
		{
			SetConsoleTextAttribute(h, 12);
			cout << text;
			cout << "\n";
		}

	}
}

int main()
{
	DrawLine(20, "@", 12, true);
}
