/*!
 * @file	DummyConsole.cpp
 *
 * @date	04.06.2013
 * @author	Superuser
 * @brief	DummyConsole.cpp
 */

#include <iostream>
#include <windows.h>
#include "DummyConsole.h"
#include "Tile.h"
#include "TileTest.h"
#include "Gameboard.h"
#include "Dimension.h"

using namespace std;

DummyConsole::DummyConsole() :
			Console( )
{
}

DummyConsole::~DummyConsole()
{
}

void DummyConsole::draw(
	unsigned short _x , unsigned short int _y , char _symbol )
{
	/*TileTest *pTile = new TileTest( );

	pTile->printTile( );

	delete ( pTile );*/

	Gameboard * pGameboard = new Gameboard(Dimension(15, 15));

	pGameboard->print();

	delete pGameboard;

	//system( "PAUSE" );
}

void DummyConsole::clear()
{

}
