/*!
 * @file	CProjekt.cpp
 *
 * @date	21.06.2013
 * @author	Superuser
 * @brief	CProjekt.cpp
 */


#include <cstdlib>
#include <iostream>
using namespace std;

#include "Tile.h"
#include "Console.h"
#include "DummyConsole.h"
#include "CProjekt.h"

CProjekt::CProjekt()
{
	// Initialisieren der Benutzeroberfl�che (in Form einer Textkonsole)
		Console* console = new DummyConsole( );

		// Benutzeroberfl�che anzeigen
		console->draw( 2 , 4 , 'x' );

		// Aufr�umcode:
		delete console;
}

CProjekt::~CProjekt()
{

}

