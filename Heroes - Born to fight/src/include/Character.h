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
			Character() { m_combatStats = new CombatStats(); m_equip = new Equipment(); };
			virtual void Attack();
			virtual void Defend(); 
			inline CombatStats* GetCombatStats() {return m_combatStats; }
			inline void SetNewEquip(Equipment* equip);
			void UseSpell();
			void UseOtherItem();

			virtual ~Character();
		private: 
			CombatStats* m_combatStats;
			Equipment* m_equip;

		};
	}
}