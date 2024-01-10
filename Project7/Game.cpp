#include "Game.h"

Game::Game()
    :
    conf("Config/window.txt")
    
{
    InitWindow();
    
}

Game::~Game()
{
}

void Game::InitWindow()
{
    pWindow = std::make_unique<sf::RenderWindow>(sf::VideoMode(conf.GetWindowWidth(), conf.GetWindowHeight()), conf.GetTitle(), sf::Style::Default);
    pWindow->setFramerateLimit(conf.GetFramerateLimit());
    pWindow->setVerticalSyncEnabled(conf.GetVerticaalSyncEnabled());
}

void Game::UpdateDT()
{
    dt = dtClock.restart().asSeconds();
    //system("cls");
    //std::cout << dt << "\n";
}

void Game::UpdateSFMLEvents()
{
    while (pWindow->pollEvent(sfEvent))
    {
        if (sfEvent.type == sf::Event::Closed)
            pWindow->close();
    }
}

void Game::Update()
{
    UpdateSFMLEvents();
    gonchik.Update(dt);
}

void Game::Render()
{
    pWindow->clear();
    pWindow->draw(gonchik.GetSprite());
    pWindow->display();
}

void Game::Run()
{
    while (pWindow->isOpen())
    {
        UpdateDT();
        Update();
        Render();
    }
}


