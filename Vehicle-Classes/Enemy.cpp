#include <iostream>
#include "Character.cpp"

class Enemy : public Character
{
	float m_Strength;

public:
	Enemy(float health, int x, int y, float strength)
		: Character(health, x, y)
		, m_Strength(strength)
	{

	}

	void Draw() override
	{
		std::cout << "*";
	}
};
