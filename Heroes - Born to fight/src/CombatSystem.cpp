#include "include\CombatSystem.h"

using namespace Heroes::Combat; 

CombatSystem::CombatSystem(Heroes::Mainframe::Player* player, Heroes::Mainframe::Enemies* enemy)
	:m_player(player)
	,m_enemy(enemy)
{
	GetFirstCharacter();
}


void CombatSystem::GetFirstCharacter()
{
	if (m_player->GetCombatStats()->Awareness < m_enemy->GetCombatStats()->Awareness)
	{

	}
}


CombatSystem::~CombatSystem()
{
	delete m_player; 
	delete m_enemy;
}