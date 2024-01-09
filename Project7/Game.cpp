#include "Game.h"

Game::Game()
{
    InitWindow();
}

Game::~Game()
{
}

void Game::InitWindow()
{
    window = std::make_unique<sf::RenderWindow>(sf::VideoMode(1200, 800), L"My Game", sf::Style::Default);
    window->setVerticalSyncEnabled(true);
}

void Game::UpdateDT()
{
    dt = dtClock.restart().asSeconds();
    system("cls");
    std::cout << dt << "\n";
}

void Game::UpdateSFMLEvents()
{
    while (window->pollEvent(sfEvent))
    {
        if (sfEvent.type == sf::Event::Closed)
            window->close();
    }
}

void Game::Update()
{
    UpdateSFMLEvents();
}

void Game::Render()
{
    window->clear();
    window->display();
}

void Game::Run()
{
    while (window->isOpen())
    {
        UpdateDT();
        Update();
        Render();
    }
}


