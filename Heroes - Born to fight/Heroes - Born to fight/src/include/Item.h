#pragma once


#pragma region Internal Includes
#include "BasicEnums.h"
#pragma endregion 

#pragma region External Includes
#include <string>
#pragma endregion 


namespace Heroes
{
	namespace Mainframe
	{
		struct Item
		{
			std::string Name; 
			float Weight;
			ItemTypes ItemType;
			unsigned int Level;
			Rarities Rarity; 
			bool QuestItem;
		};
		struct Weapon : Item
		{	
			float Damage; 
			float AttackSpeed;
		};
		struct Shield : Item
		{
			float ArmorPoints; 
			float BlockChance; 
			float DamageReduction;
		};
		struct Armor : Item
		{
			float ArmorPoints;
		};
		struct Potion : Item
		{
			Effects Effect;
			int Value;
		};
		struct Spellbook : Item
		{
			float Damage; 
			Effects Effect; 
			int Manacosts;
			int Cooldown;
		};
		struct Other : Item
		{
			Effects Effect;
		};
	}
}
