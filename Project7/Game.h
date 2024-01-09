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

	// window ptr
	std::unique_ptr<sf::RenderWindow> window;

	// event variable
	sf::Event sfEvent;

	// delta clock variables 
	float dt;
	sf::Clock dtClock;
};

