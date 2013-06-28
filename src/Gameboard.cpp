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
#include "PositionIterator.h"

using namespace std;

Gameboard::Gameboard(Dimension _dimension) :
			dimension(_dimension),
			gamebordBlock(createGamebord())
{

}

Gameboard::~Gameboard()
{
	deleateGameboard();
}

Block * Gameboard::createGamebord()
{
	Block * retval = new Block[dimension.getSize()];

	for(unsigned short i = 0; i < dimension.getHeight(); i++)
	{
		for(unsigned short j = 0; j < dimension.getWidth(); j++)
		{
			retval[i * dimension.getWidth() + j].setSymbol('x');
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
	for (std::shared_ptr<DimensionPositionIterator> positions =
			dimension.getIterator(); positions->hasNext();)
	{
		Position position = positions->getNext();
		gamebordBlock[position.getY() * dimension.getWidth() + position.getX()].printSymbol();
		if(position.getX() + 1 == dimension.getWidth())
			cout << endl;
	}

//	for(unsigned short i = 0; i < dimension.getHeight(); i++)
//		{
//			for(unsigned short j = 0; j < dimension.getWidth(); j++)
//			{
//				gamebordBlock[i * dimension.getWidth() + j].printSymbol();
//			}
//
//			cout << endl;
//		}
}
