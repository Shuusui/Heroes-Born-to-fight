#include "include\MainMenu.h"

using namespace Heroes::Mainframe; 

MainMenu::MainMenu()
{

}

void MainMenu::InitMainMenu()
{
	char currentAnswer[127]; 
	std::cout << "Sie brauchen nur Zahlen einzutippen. Bitte waehlen sie: \n 1. Das Spiel starten \n 2. Optionen auswaehlen \n 3. Ein vorhandenes Spiel laden \n 4. Das Spiel verlassen"; 
	std::cin >> currentAnswer; 
	short currentChoice = atoi(currentAnswer);
	switch (currentChoice)
	{
	case 1: 
		StartGame();
		break; 
	case 2: 
		Options();
		break; 
	case 3:
		LoadGame(); 
		break; 
	case 4: 
		Exit();
		break; 
	default: 
		std::cout << "Keine valide Antwort, bitte erneut eingeben."; 
		InitMainMenu(); 
		break; 
	}
}

void MainMenu::StartGame()
{
	MainGameLoop* mainLoop = new MainGameLoop(); 
	mainLoop->InitGame();
}

void MainMenu::Options()
{

}

void MainMenu::LoadGame()
{

}

void MainMenu::Exit()
{

}