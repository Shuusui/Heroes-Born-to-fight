#pragma once


#pragma region Internal Includes
#include "BasicEnums.h"
#include "BasicStructs.h"
#include "Inventory.h"
#pragma endregion 

#pragma region External Includes
#include <iostream>
#pragma endregion 



namespace Heroes
{
	namespace Mainframe
	{
		class Player
		{
		public: 
			Player(HeroClasses hero1); 
			int GetCurrentLevel();
			void AddExp(int experience);
			void Attack(); 
			void Defend(); 
			void UsePotion(); 
			void UseSpell(); 
			void UseOtherItem(); 
			void EquipGear();
			void GetEffect(Item* item);
			~Player();
		private: 
			bool AddMana(int manaValue);
			bool AddHealth(int healthValue);
			void CalculateExperienceToNextLevel();
			PlayerStats* m_stats;
			Inventory* m_inv; 
		};
	}
}
