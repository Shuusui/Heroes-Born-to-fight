#pragma once

#pragma region Internal Includes
#include "BasicStructs.h"
#include "BaseEnemyBrain.h"
#include "Enemies.h"
#pragma endregion

#pragma region External Includes
#pragma endregion

namespace Heroes
{
	namespace Mainframe
	{
		class MageEnemy : public Enemies
		{
		public:
			MageEnemy();
		private:
			~MageEnemy();
		};
	}
}
