#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

class Game
{
private:
	sf::RenderWindow* window;

	//private functions
	void initWindow();

public:
	Game();
	virtual ~Game();

	//Functions
	void run();

	void update();
	void render();
};

#endif GAME_H

