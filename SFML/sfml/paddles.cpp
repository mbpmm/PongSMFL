#include "paddles.h"

Paddle::Paddle()
{

}
Paddle::Paddle(int x, int y, RectangleShape rec)
{
	_x = x;
	_y = y;
	_rec = rec;
	_gravity = 0.4f;
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
		//_rec.move(_vel);
	}
	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		_vel.x = 1;
		//_rec.move(_vel);
	}
	/*if (Event::KeyPressed(Keyboard::Space))
	{
		float pushvel=-20;
		_vel.y = pushvel +_gravity;
		pushvel = _vel.y;
		_rec.move(_vel);
	}*/

}

void Paddle::UpdatePaddle()
{
	if (_y < 395)                  //If you are above ground
		_vel.y += _gravity;    //Add gravity
	else if (_y > 395)             //If you are below ground
		_y = 395;                 //That's not supposed to happen, put him back up

	_vel.y += _acc.x;
	_vel.y += _acc.y;

	_x += _vel.x;
	_y += _vel.y*0.1;
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