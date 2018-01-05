#pragma once

#pragma region Internal Includes
#include "Enemies.h"
#include "Item.h"
#pragma endregion 

#pragma region External Includes
#include <string>
#pragma endregion 


namespace Heroes
{
	namespace Mainframe
	{
		class Tile
		{
		public: 
			Tile(); 
		private:
			std::string Description();

			Enemies* m_currentEnemy;
			Item* m_currentItem;
		};
	}
}