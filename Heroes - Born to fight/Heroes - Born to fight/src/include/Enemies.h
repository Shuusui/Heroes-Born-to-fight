#pragma once

#pragma region Internal Includes
#include "BasicStructs.h"
#pragma endregion

#pragma region External Includes
#include <string>
#pragma endregion

namespace Heroes
{
	namespace Mainframe
	{
		class Enemies
		{
		public: 
			Enemies(std::string name);
			virtual ~Enemies();
		private: 
			EnemyStats* m_stats;
			std::string m_name;
			Equipment* m_equip; 
			CombatStats* m_combatStats;
		};
	}
}