#pragma once
struct IAnimal 
{
	virtual void Eat() = 0;
	virtual void Move() = 0;
};

struct IFly
{
	virtual void Fly() = 0;
};

struct ISwim {
	virtual void Swim() = 0;
};
