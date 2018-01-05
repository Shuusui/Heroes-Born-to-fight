#pragma once


#pragma region Internal Includes
#pragma endregion 

#pragma region External Includes
#pragma endregion 


namespace Heroes
{
	namespace Mainframe
	{
		enum HeroClasses
		{
			Berserk,
			Hunter,
			Assassin,
			Mage,
			Knight
		};
		enum ItemTypes
		{
			Weapons, 
			Armors, 
			Potions, 
			Spellbooks, 
			Others
		};
		
		enum Effects
		{
			PotionEffects,
			SpellEffects, 
			OtherEffects
		};

		enum PotionEffects 
		{
			Mana,
			Health
		};
		enum SpellEffects
		{
			Burn,
			Frozen
		};
		enum OtherEffects
		{
			Light
		};
		
		enum Rarities
		{
			Normal, 
			Rare, 
			Epic,
			Legendary, 
			Unique
		};
	}
}

