#pragma once

#pragma region Internal Includes
#include "BasicStructs.h"
#include "Character.h"
#pragma endregion

#pragma region External Includes
#include <string>
#pragma endregion

namespace Heroes
{
	namespace Mainframe
	{
		class Enemies : public Character
		{
		public: 
			Enemies(std::string name);
			virtual void Attack(); 
			virtual void Defend();
			virtual ~Enemies();
		private: 
			EnemyStats* m_stats;
			std::string m_name;
		};
	}
}