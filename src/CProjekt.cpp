/*!
 * @file	CProjekt.cpp
 *
 * @date	21.06.2013
 * @author	Superuser
 * @brief	CProjekt.cpp
 */

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

#include "Tile.h"
#include "DummyConsole.h"
#include "CProjekt.h"

CProjekt::CProjekt() :
		console(new DummyConsole())
{
	init();
}

CProjekt::~CProjekt() {
	delete console;
}

void CProjekt::init()
{
	srand(time(NULL));  //! Initialize random number generator.
}

void CProjekt::run() {
	// Benutzeroberfläche anzeigen
	console->draw(2, 4, 'x');
}
