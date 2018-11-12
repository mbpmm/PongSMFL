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
	void UpdatePaddle();
	int getX();
	int getY();
	RectangleShape getRec();
	Vector2f _vel;

private:
	float _x;
	float _y;	
	Vector2f _acc;
	float _gravity;
	RectangleShape _rec;
};

#endif;