#include "Gonchik.h"

Gonchik::Gonchik()
{
	InitRects();
	InitTexture();
	vec.x = 300.0f;
	vec.y = 300.0f;

}

void Gonchik::InitRects()
{
	int rectWidth = 450;
	int xCur = 0;
	for (int i = 0; i < 6; i++)
	{
		rects.emplace_back(xCur, 0, rectWidth, 500);
		xCur += rectWidth;
	}
}

void Gonchik::InitTexture()
{
	
	texture.loadFromFile("images/gonchikx.png");
	texture.setSmooth(true);
	
	sprite.setTexture(texture);
	sprite.setTextureRect(rects[0]);
	sprite.setPosition(vec.x, vec.y);
}

void Gonchik::Update(float dt)
{
	Move(dt);
	ChangeAnim(dt);
	
}

sf::Sprite Gonchik::GetSprite()
{
	return sprite;
}

void Gonchik::Move(float dt)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		vec.x -= speed * dt;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		vec.x += speed * dt;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		vec.y -= speed * dt;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		vec.y += speed * dt;
	}
	sprite.setPosition(vec.x, vec.y);
}

void Gonchik::ChangeAnim(float dt)
{
	changeAnimCounter += dt;
	if (changeAnimCounter >= changeAnimMaxVal)
	{
		changeAnimCounter = 0;
		if (rectIndex < 5)
		{
			rectIndex++;
			sprite.setTextureRect(rects[rectIndex]);
		}
		else
		{
			rectIndex = 0;
		}
	}
}

