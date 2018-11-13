//#include "SFML/Graphics.hpp"
//#include "STP/TMXLoader.hpp"
//#include "paddles.h"
//#include "particles.h"
#include "app.h"
//using namespace sf;
int main()
{
	//sf::RenderWindow window(sf::VideoMode(800, 600), "STP Example");
	//tmx::TileMap map("res/assets/2.tmx");

	//map.ShowObjects(); // Display all the layer objects.

	////map.GetLayer("World").visible = false; // Hide a Layer named World
	//Vector2f vec = { 69,69 };
	//RectangleShape rec;
	//rec.setSize(vec);
	//int x = 2;
	//int y = 395;
	//rec.setFillColor(sf::Color::Magenta);
	//rec.setPosition(x, y);
	//Paddle* pj = new Paddle(x,y,rec);
	//sf::View view2(sf::Vector2f(400, 300), sf::Vector2f(800, 600));
	//ParticleSystem particles(1000);

	//// create a clock to track the elapsed time
	//sf::Clock clock;
	//									   // Start the game loop
	//while (window.isOpen()) {
	//	// Process events
	//	sf::Event event;
	//	while (window.pollEvent(event)) {
	//		// Close window : exit
	//		if (event.type == sf::Event::Closed)
	//			window.close();
	//		
	//		if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space) {
	//			pj->_vel.y = -4.f;
	//		}
	//	}

	//	pj->UpdatePaddle();
	//	pj->MovePaddle();
	//	if (pj->getX() >= 300)
	//	{
	//		view2.setCenter(pj->getX() + 100, 300);
	//	}

	//	Vector2f box = {(float) pj->getX()+69/2, (float)pj->getY()+69/2 };
	//	particles.setEmitter(box);

	//	// update it
	//	sf::Time elapsed = clock.restart();
	//	particles.update(elapsed);
	//	// Clear screen
	//	window.clear();
	//	// Draw the map
	//	window.draw(map);
	//	window.draw(particles);
	//	window.setView(view2);
	//	// Update the window
	//	window.draw(pj->getRec());
	//	
	//	window.display();
	//}
	app::ExecuteGame();

	return 0;
}