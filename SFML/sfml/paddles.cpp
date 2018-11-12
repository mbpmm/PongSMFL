#include "paddles.h"

Paddle::Paddle()
{

}
Paddle::Paddle(int x, int y, RectangleShape rec)
{
	_x = x;
	_y = y;
	_rec = rec;
	_gravity = 0.04f;
	_vel = {0,0};
	_acc= { 0,0 };

}
Paddle::~Paddle()
{

}
void Paddle::MovePaddle()
{
	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		_vel.x=-1;
	}
	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		_vel.x = 1;
	}

}

void Paddle::UpdatePaddle()
{
	if (_y < 395)                  
		_vel.y += _gravity;    
	else if (_y > 395)             
		_y = 395;                 

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