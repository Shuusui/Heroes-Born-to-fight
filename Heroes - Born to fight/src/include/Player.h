#pragma once


#pragma region Internal Includes
#include "BasicEnums.h"
#include "BasicStructs.h"
#include "Inventory.h"
#include "Character.h"
#pragma endregion 

#pragma region External Includes
#include <iostream>
#pragma endregion 



namespace Heroes
{
	namespace Mainframe
	{
		class Player : public Character
		{
		public: 
			Player(HeroClasses hero1); 
			unsigned int GetCurrentLevel();
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
			bool const AddMana(int manaValue);
			bool AddHealth(int healthValue);
			void CalculateExperienceToNextLevel();
			void CalculateMaxHealth(); 
			void CalculateMaxMana();
			PlayerStats* m_stats;
			Inventory* m_inv; 
		};
	}
}
