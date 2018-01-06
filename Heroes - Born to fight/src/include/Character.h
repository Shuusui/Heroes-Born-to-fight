#pragma once

#pragma region Internal Includes
#include "BasicStructs.h"
#pragma endregion 

#pragma region External Includes

#pragma endregion 

namespace Heroes
{
	namespace Mainframe
	{
		class Character
		{
		public:
			virtual void Attack();
			virtual void Defend(); 
			CombatStats* GetCombatStats();
			void SetNewEquip(Equipment* equip);
			void UseSpell();
			void UseOtherItem();
		private: 
			CombatStats* m_combatStats;
			Equipment* m_equip;

		};
	}
}