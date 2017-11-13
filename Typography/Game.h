#pragma once
#ifndef GAME
#define GAME

#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>

/// <summary>
/// author Zhenze Zhao
/// date 6th Otc 2017 
/// </summary>

class Author;
class Licence;
class Splash;
class Credit;

enum class States
{
	Author,
	Licence,
	Splash,
	Credit
};

class Game
{
public:
	Game();
	~Game();

	void run();

	States m_currentState;
	void setGameState(States state);
private:
	sf::RenderWindow m_window;

	void processEvents();
	void update(sf::Time time);
	void render();

	sf::Font m_font;

	sf::Clock m_clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds(1.0f / 60.0f); // 60 fps for this window

};

#endif // !Game