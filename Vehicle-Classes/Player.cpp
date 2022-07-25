#include <iostream>
#include "Character.cpp"

class Player : public Character
{
	bool m_HasKey;

public:
	Player(float health, int x, int y)
		: Character(health, x, y)
		, m_HasKey(false)
	{

	}

	void Draw()
	{
		std::cout << "@";
	}

	void UseHealth(float health)
	{
		m_Health += health;
		if (!m_IsAlive)
		{
			m_IsAlive = true;
		}
	}

	void PickupKey()
	{
		m_HasKey = true;
	}
};
