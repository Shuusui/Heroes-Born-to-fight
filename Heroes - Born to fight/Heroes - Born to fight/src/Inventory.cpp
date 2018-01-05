#include "include\Inventory.h"

using namespace Heroes::Mainframe; 

Inventory::Inventory(int strength)
	:m_capacityMultiplicator(1.5f)
	,m_minCapacity(10)
	,m_capacity((strength*m_capacityMultiplicator)+m_minCapacity)
{

}
void Inventory::AddItem(Item* item)
{
	m_content.push_back(item);
}
bool Inventory::ThrowItem(int invSpace)
{
	if (!m_content[invSpace]->QuestItem)
	{
		std::vector<Item*>::iterator it;
		std::advance(it, invSpace);
		m_content.erase(it);
		return true;
	}
	else
		return false; 
}
std::vector<Item*> Inventory::SearchForItemTypes(ItemTypes itemType)
{
	std::vector<Item*> items; 
	for (int i = 0; i < m_content.size(); i++)
	{
		if (m_content[i]->ItemType == itemType)
		{
			items.push_back(m_content[i]); 
		}
	}
	return items; 
}