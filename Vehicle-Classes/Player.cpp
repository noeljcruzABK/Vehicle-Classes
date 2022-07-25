#include <iostream>

class Player
{
	float m_Health;
	int m_xPosition;
	int m_yPosition;
	bool m_IsAlive;
	bool m_HasKey;

public:
	Player(float health, int x, int y)
		: m_Health(health)
		, m_xPosition(x)
		, m_yPosition(y)
		, m_IsAlive(true)
		, m_HasKey(false)
	{

	}

	void Draw()
	{
		std::cout << "@";
	}

	void Move(int x, int y)
	{
		m_xPosition += x;
		m_yPosition += y;
	}

	void TakeDamage(float damage)
	{
		if (m_IsAlive)
		{
			m_Health -= damage;
			if (m_Health <= 0)
			{
				m_Health = 0;
				m_IsAlive = false;
			}
		}
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
