#include "paddles.h"

Paddle::Paddle()
{

}
Paddle::Paddle(int x, int y, RectangleShape rec)
{
	_x = x;
	_y = y;
	_rec = rec;
}
Paddle::~Paddle()
{

}
void Paddle::MovePaddle()
{
	if (Keyboard::isKeyPressed(Keyboard::Up))
	{
		_y-=3;
		_rec.setPosition(_x, _y);
	}
	if (Keyboard::isKeyPressed(Keyboard::Down))
	{
		_y += 3;
		_rec.setPosition(_x, _y);
	}
}
void Paddle::CollisionPaddle()
{

}
RectangleShape Paddle::getRec()
{
	return _rec;
}