#include <SFML/Graphics.hpp>
#include "paddles.h"
using namespace sf;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML PONG!");
	RectangleShape rec;
	Vector2f tamano(15, 75);
	rec.setFillColor(sf::Color::Magenta);
	rec.setSize(tamano);
	rec.setPosition(10, 300-37);
	Paddle paleta(10, 300 - 37, rec);
	extern Clock clock;
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			
			paleta.MovePaddle();
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(paleta.getRec());
		window.display();
	}

	return 0;
}