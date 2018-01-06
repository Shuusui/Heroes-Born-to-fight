#include "include\Player.h"

using namespace Heroes::Mainframe; 

Player::Player(HeroClasses hero1)
{
	m_stats->Level = 0; 
	m_stats->CurrentExperience = 0; 
	switch (hero1)
	{
	case Berserk: 
		m_stats->Strength = 10; 
		break; 
	case Hunter:
		m_stats->Strength = 4;
		break;
	case Assassin:
		m_stats->Strength = 6;
		break;
	case Mage:
		m_stats->Strength = 2;
		break;
	case Knight:
		m_stats->Strength = 8;
		break;
	}
	m_inv = new Inventory(m_stats->Strength);
}

unsigned int Player::GetCurrentLevel()
{
	return m_stats->Level;
}

void Player::AddExp(int experience)
{
	m_stats->CurrentExperience += experience;
	if (m_stats->CurrentExperience >= m_stats->ExperienceToNextLevel)
	{
		m_stats->Level++;
		CalculateExperienceToNextLevel();
		std::cout << "Herzlichen Glueckwunsch, du hast Level ", m_stats->Level, " erreicht.";
	}
}

void Player::Attack()
{

}

void Player::Defend()
{

}

void Player::UsePotion()
{
	std::vector<Item*> potions = m_inv->SearchForItemTypes(ItemTypes::Potions);
	std::cout << "Es befinden sich: \n";
	for (int i = 0; i < potions.size(); i++)
	{
		std::cout << i, ".", " ", potions[i]->Name, "\n";
	}
	std::cout << "in ihrem Inventar, welches möchten sie benutzen?";

}

void Player::GetEffect(Item* item)
{
	if (item->ItemType == ItemTypes::Potions)
	{
		Potion* potion = (Potion*)item;
		switch (Effects::PotionEffects)
		{
		case Mana:
			if (!AddMana(potion->Value))
				std::cout << "Du besitzt bereits volles Mana";
			break;
		case Health:
			if (!AddHealth(potion->Value))
				std::cout << "Du besitzt bereits volles Leben";
			break;
		}
	}
}


bool Player::AddMana(int manaValue)
{
	if (m_stats->Mana != m_stats->MaxMana)
	{
		m_stats->Mana += manaValue;
		return true;
	}
	else
		return false;
}

bool Player::AddHealth(int healthValue)
{
	if (m_stats->Health != m_stats->MaxHealth)
	{
		m_stats->Health += healthValue;
		return true;
	}
	else
		return false;
}

void Player::UseSpell()
{
	std::vector<Item*> spellbooks = m_inv->SearchForItemTypes(ItemTypes::Spellbooks);
	std::cout << "Es befinden sich: \n";
	for (int i = 0; i < spellbooks.size(); i++)
	{
		std::cout << i, ".", " ", spellbooks[i]->Name, "\n";
	}
	std::cout << "in ihrem Inventar, welches möchten sie benutzen?";
}

void Player::UseOtherItem()
{
	std::vector<Item*> otherItems = m_inv->SearchForItemTypes(ItemTypes::Others);
	std::cout << "Es befinden sich: \n";
	for (int i = 0; i < otherItems.size(); i++)
	{
		std::cout << i, ".", " ", otherItems[i]->Name, "\n";
	}
	std::cout << "in ihrem Inventar, welches möchten sie benutzen?";
}

void Player::EquipGear()
{
	std::vector<Item*> gear = m_inv->SearchForItemTypes(ItemTypes::Armors);
	std::vector<Item*> weapons = m_inv->SearchForItemTypes(ItemTypes::Weapons);
	for (int i = 0; i < weapons.size(); i++)
	{
		gear.push_back(weapons[i]);
	}
	std::cout << "Es befinden sich: \n";
	for (int i = 0; i < gear.size(); i++)
	{
		std::cout << i, ".", " ", gear[i]->Name, "\n";
	}
	std::cout << "in ihrem Inventar, welches möchten sie anlegen?";

}

void Player::CalculateExperienceToNextLevel()
{

}

void Player::CalculateMaxHealth()
{

}

void Player::CalculateMaxMana()
{

}

Player::~Player()
{
	delete m_stats; 
	delete m_inv; 
	delete m_combatStats;
}