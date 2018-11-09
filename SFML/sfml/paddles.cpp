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
	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		_x-=8;
		_rec.setPosition(_x, _y);
	}
	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		_x += 8;
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
int Paddle::getX()
{
	return _x;
}
int Paddle::getY()
{
	return _y;
}