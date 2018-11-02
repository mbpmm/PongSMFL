#ifndef PADDLES_H
#define PADDLES_H

#include <SFML/Graphics.hpp>
using namespace sf;

class Paddle
{
public:
	Paddle();
	Paddle(int x, int y, RectangleShape rec);
	~Paddle();
	void MovePaddle();
	void CollisionPaddle();

private:
	int _x;
	int _y;
	RectangleShape _rec;
};

#endif;
