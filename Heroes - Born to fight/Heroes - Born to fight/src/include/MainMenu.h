#pragma once


#pragma region Internal Includes
#include "MainGameLoop.h"
#pragma endregion 

#pragma region External Includes
#include <iostream>
#pragma endregion 


namespace Heroes
{
	namespace Mainframe
	{
		class MainMenu
		{
		public: 
			MainMenu(); 
			void InitMainMenu(); 
			void Exit();
		private:
			void StartGame(); 
			void Options();
			void LoadGame(); 
		};
	}
}