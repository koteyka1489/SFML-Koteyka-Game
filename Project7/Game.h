#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include <iostream>

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

