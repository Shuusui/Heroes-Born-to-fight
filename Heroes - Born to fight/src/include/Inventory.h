#pragma once


#pragma region Internal Includes
#include "Item.h"
#include "BasicEnums.h"
#pragma endregion 

#pragma region External Includes
#include <vector>
#pragma endregion 


namespace Heroes
{
	namespace Mainframe
	{
		class Inventory
		{
		public: 
			Inventory(int Strength); 
			void AddItem(Item* item);
			bool ThrowItem(int invSpace); 
			std::vector<Item*> SearchForItemTypes(ItemTypes itemType);
		private: 
			std::vector<Item*> m_content;
			float m_capacity; 
			float m_capacityMultiplicator; 
			float m_minCapacity; 

		};
	}
}

