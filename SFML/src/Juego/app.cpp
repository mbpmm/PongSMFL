#include "app.h"

#include "SFML/Graphics.hpp"
#include "STP/TMXLoader.hpp"
#include "paddles.h"
#include "particles.h"

using namespace app;
using namespace sf;

namespace app
{
	static int screenWidth = 1280;
	static int screenHeight =768;
	bool exit = false;
	Screens currentScreen = Menu;
	RenderWindow window(sf::VideoMode(800, 600), "STP Example");
	tmx::TileMap map("res/assets/2.tmx");

	Vector2f vec = { 69,69 };
	RectangleShape rec;
	int x = 2;
	int y = 395;
	Paddle pj;
	View view2(sf::Vector2f(400, 300), sf::Vector2f(800, 600));
	ParticleSystem particles(1000);

	Clock clock;

	static void InitGame()
	{
		map.ShowObjects(); // Display all the layer objects.

		rec.setSize(vec);
		rec.setFillColor(sf::Color::Magenta);
		rec.setPosition(static_cast<float>(x), static_cast<float>(y));
		pj = Paddle(x, y, rec);
	}

	static void UpdateGame()
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			// Close window : exit
			if (event.type == sf::Event::Closed)
				window.close();

			/*if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space) {
				pj->_vel.y = -4.f;
			}*/
		}
	}

	static void DrawGame()
	{
		window.clear();
		// Draw the map
		window.draw(map);
		window.draw(particles);
		window.setView(view2);
		// Update the window
		window.draw(pj.getRec());

		window.display();
	}

	void ExecuteGame()
	{
		InitGame();
		// Main game loop
		while (window.isOpen()) {
			// Process events
			sf::Time elapsed = clock.restart();
			UpdateGame();

			pj.UpdatePaddle(elapsed);
			pj.MovePaddle(elapsed);
			if (pj.getX() >= 300)
			{
				view2.setCenter(static_cast<float>(pj.getX()) + 100, 300.f);
			}

			Vector2f box = { (float)pj.getX() + 69 / 2, (float)pj.getY() + 69 / 2 };
			particles.setEmitter(box);

			// update it
			
			particles.update(elapsed);
			DrawGame();
			/*CloseGame();*/
		}
	}
}