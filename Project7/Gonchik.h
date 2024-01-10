#pragma once
#include "State.h"
#include <vector>
#include <SFML/Graphics.hpp>
#include <memory>

class Gonchik
{

public:
	Gonchik();
	void Update(float dt);
	sf::Sprite GetSprite();
	

private:
	void InitRects();
	void InitTexture();
	void ChangeAnim(float dt);
	void Move(float dt);

private:
	sf::Texture texture;
	std::vector<sf::Rect<int>> rects;
	sf::Sprite sprite;

	sf::Vector2<float> vec;
	int rectIndex = 0;

	float speed = 300.0f;
	float changeAnimCounter = 0.0f;
	float changeAnimMaxVal = 0.1f;
};

