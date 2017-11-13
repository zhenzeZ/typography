#include "Game.h"
#include <iostream>

Game::Game():
	m_window(sf::VideoMode(800, 480), "Typography")
{
	if (!m_font.loadFromFile("c: / windows / fonts / comic.ttf"))
	{
		std::string s("Error loading font");
		throw std::exception(s.c_str());
	} // display font loading error


}

Game::~Game()
{

}

void Game::run()
{
	while (m_window.isOpen())
	{
		processEvents();

		timeSinceLastUpdate += m_clock.restart();

		while (timeSinceLastUpdate > timePerFrame) // reflash the window 60 times pre second
		{
			timeSinceLastUpdate -= timePerFrame;
			update(timePerFrame);
		}

		render();
	}
}

void Game::update(sf::Time time)
{
	switch (m_currentState)
	{
	case States::Author:
		break;
	case States::Licence:
		break;
	case States::Splash:
		break;
	case States::Credit:
		break;
	default:
		break;
	}
}

void Game::render()
{
	switch (m_currentState)
	{
	case States::Author:
		break;
	case States::Licence:
		break;
	case States::Splash:
		break;
	case States::Credit:
		break;
	default:
		break;
	}
}

/// <summary>
/// check window close
/// </summary>
void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close();
		}
	}
}

void Game::setGameState(States state)
{
	m_currentState = state;
}