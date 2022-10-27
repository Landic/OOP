#include "ComputerClub.h"

ComputerClub::ComputerClub() // конструктор по умолчанию
{
	balance = 500;
	busy = false;
	weak_computer.resize(0);
	average_computer.resize(0);
	powerful_computer.resize(0);
}
