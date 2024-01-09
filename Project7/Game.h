#pragma once
#include "State.h"


class Game
{
public:
	Game();
	virtual ~Game();
	void UpdateDT();
	void UpdateSFMLEvents();
	void Update();
	void Render();
	void Run();

private:
	void InitWindow();

private:
	std::unique_ptr<sf::RenderWindow> window;
	sf::Event sfEvent;
	float dt;
	sf::Clock dtClock;
};

