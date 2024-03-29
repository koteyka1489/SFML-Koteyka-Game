#pragma once
#include "State.h"
#include "Config.h"
#include "Gonchik.h"


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
	// config class object
	Config conf;

	// window ptr
	std::unique_ptr<sf::RenderWindow> pWindow;

	// event variable
	sf::Event sfEvent;

	// delta clock variables 
	float dt;
	sf::Clock dtClock;

	Gonchik gonchik;

	
};

