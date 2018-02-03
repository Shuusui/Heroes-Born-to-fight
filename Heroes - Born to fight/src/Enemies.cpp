#include "include\Enemies.h"

using namespace Heroes::Mainframe; 

Enemies::Enemies(std::string name)
	:m_name(name)
{

}


Enemies::~Enemies()
{
	delete m_stats; 
}