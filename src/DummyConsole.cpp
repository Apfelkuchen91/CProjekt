/*!
 * @file	DummyConsole.cpp
 *
 * @date	04.06.2013
 * @author	Superuser
 * @brief	DummyConsole.cpp
 */


#include <iostream>
#include "DummyConsole.h"

using namespace std;

DummyConsole::DummyConsole() :
			Console( )
{
	// TODO Auto-generated constructor stub

}

DummyConsole::~DummyConsole()
{
	// TODO Auto-generated destructor stub
}

void DummyConsole::draw(unsigned short _x, unsigned short int _y, char _symbol)
{
	cout << _symbol << endl;
}

void DummyConsole::clear()
{

}
