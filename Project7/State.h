#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include <iostream>
#include <vector>

class State
{
public:
	State();
	virtual ~State();
	virtual void Update() = 0;
	virtual void Render() = 0;


private:
	std::vector<sf::Texture> textures;
};

