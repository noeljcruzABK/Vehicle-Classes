#include <iostream>

class Enemy
{
	float m_Health;
	int m_xPosition;
	int m_yPosition;
	bool m_IsAlive;
	float m_Strength;

public:
	Enemy(float health, int x, int y, float strength)
		: m_Health(health)
		, m_xPosition(x)
		, m_yPosition(y)
		, m_IsAlive(true)
		, m_Strength(strength)
	{

	}

	void Draw()
	{
		std::cout << "*";
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
};
