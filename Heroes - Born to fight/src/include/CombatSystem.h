#pragma once

#pragma region Internal Includes
#include "Enemies.h"
#include "Player.h"
#pragma endregion 

#pragma region External Includes
#pragma endregion 


namespace Heroes
{
	namespace Combat
	{
		class CombatSystem
		{
		public: 
			CombatSystem(Heroes::Mainframe::Player* player, Heroes::Mainframe::Enemies* enemy);
			~CombatSystem();
		private: 
		};
	}
}