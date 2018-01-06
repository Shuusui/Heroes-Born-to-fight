#pragma once

#pragma region Internal Includes
#include "Item.h"
#pragma endregion 

#pragma region External Includes
#include <vector>
#pragma endregion


namespace Heroes
{
	namespace Mainframe
	{
		struct PlayerStats
		{
			unsigned int Level;
			unsigned int Health;
			unsigned int MaxHealth;
			unsigned int Mana; 
			unsigned int MaxMana; 
			unsigned int Strength; 
			unsigned int Agility;
			unsigned int Constitution; 
			unsigned int Intelligence; 
			unsigned int CurrentExperience; 
			unsigned int ExperienceToNextLevel;
		};

		struct CombatStats
		{
			unsigned int Damage; 
			float DamageReduction;
			float BlockChance; 
			float AttackSpeed; 
			float Evasion;
			float Awareness; 
		};

		struct Equipment
		{
			Weapon* Weapon;
			Shield* Shield; 
			Armor* Armor;
			Other* OtherItems; 

			~Equipment() { delete Weapon; delete Shield; delete Armor; delete OtherItems; }
		};

		struct EnemyStats
		{
			unsigned int Level; 
			unsigned int ExperienceToGain;
			unsigned int Health;
			unsigned int Mana; 
			std::vector<Item*> LootItems;

		};
	}
}