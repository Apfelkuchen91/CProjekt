/*!
 * @file	Gameboard.cpp
 *
 * @date	14.06.2013
 * @author	Superuser
 * @brief	Headerdatei f&uuml;r Spielfeld
 */

#include <iostream>
#include <cstdlib>
#include "Gameboard.h"

using namespace std;

Gameboard::Gameboard(
	const unsigned short _height , const unsigned short _weight ) :
			height( _height ),
			weight( _weight ),
			gamebordBlock(createGamebord())
{
	// TODO Auto-generated constructor stub

}

Gameboard::~Gameboard()
{
	deleateGameboard();
}

Block * Gameboard::createGamebord()
{
	Block * retval = new Block[height * weight];

	for(unsigned short i = 0; i < height; i++)
	{
		for(unsigned short j = 0; j < weight; j++)
		{
			retval[i * weight + j].setSymbol('x');
		}
	}

	return retval;
}


void Gameboard::deleateGameboard()
{
	delete[] gamebordBlock;
	gamebordBlock = NULL;
}


void Gameboard::print()
{
	for(unsigned short i = 0; i < height; i++)
		{
			for(unsigned short j = 0; j < weight; j++)
			{
				gamebordBlock[i * weight + j].printSymbol();
			}

			cout << endl;
		}
}
