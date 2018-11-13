#include "paddles.h"

Paddle::Paddle()
{

}
Paddle::Paddle(int x, int y, RectangleShape rec)
{
	_x = x;
	_y = y;
	_rec = rec;
	_gravity = 10.f;
	_vel = {0,0};
	_acc= { 0,0 };

}
Paddle::~Paddle()
{

}
void Paddle::MovePaddle(Time elapsed)
{
	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		_vel.x=-400*elapsed.asSeconds();
	}
	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		_vel.x = 400 * elapsed.asSeconds();
	}
	if (Keyboard::isKeyPressed(Keyboard::Space))
	{
		_vel.y = -700.f * elapsed.asSeconds();
	}

}

void Paddle::UpdatePaddle(Time elapsed)
{
	if (_y < 395)                  
		_vel.y += _gravity * elapsed.asSeconds();
	else if (_y > 391)             
		_y = 391;                 

	_vel.y += _acc.x;
	_vel.y += _acc.y;

	_x += _vel.x;
	_y += _vel.y;
	_rec.setPosition(_x,_y);
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