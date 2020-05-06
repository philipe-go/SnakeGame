#include <iostream>
#include <conio.h>
#include <windows.h>
#include <MMsystem.h>
#include "SnakeGame.cpp"

using namespace std;

int main()
{
	PlaySound(TEXT("soundSnake.wav"), NULL, SND_SYNC);
	Setup();
	while (!gameOver)
	{
		Draw();
		Input();
		Logic();
		Sleep(100);
	}
	return 0;
}