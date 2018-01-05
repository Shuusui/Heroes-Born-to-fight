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
			unsigned int CurrentExperience; 
			unsigned int ExperienceToNextLevel;
		};

		struct CombatStats
		{
			unsigned int Damage; 
			float DamageReduction;
			float BlockChance; 
			float AttackSpeed; 
		};

		struct Equipment
		{
			Weapon* Weapon;
			Shield* Shield; 
			Armor* Armor;
			Spellbook* Spellbook; 
			Other* OtherItems; 

			~Equipment() { delete Weapon; delete Shield; delete Armor; delete Spellbook; delete OtherItems; }
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