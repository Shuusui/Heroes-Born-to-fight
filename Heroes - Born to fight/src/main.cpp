#pragma region Internal Includes
#include "include\MainMenu.h"
#pragma endregion 

#pragma region External Includes

#pragma endregion 

using namespace Heroes::Mainframe; 

void main()
{
	MainMenu* mainMenu = new MainMenu();

	mainMenu->InitMainMenu(); 

	delete mainMenu;
}