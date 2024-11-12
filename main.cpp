#include <iostream>
#include <windows.h>
using namespace std;
int SetConsoleColor(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}
int main() {
	SetConsoleColor(2);
	cout << "Green" << endl;
	SetConsoleColor(4);
	cout << "Red" << endl;
	SetConsoleColor(7);
	cout << "Standart" << endl;
	SetConsoleColor(14);
	cout << "Yellow" << endl;
}