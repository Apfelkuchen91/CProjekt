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

Gameboard::Gameboard( Dimension _dimension ) :
			dimension( _dimension ),
			gameboardBlock( createGameboard( ) )
{

}

Gameboard::~Gameboard()
{
	delete[] gameboardBlock;
	gameboardBlock = NULL;
}

Block * Gameboard::createGameboard()
{
	Block * retval = new Block[dimension.getSize( )];

	for ( unsigned short i = 0 ; i < dimension.getHeight( ) ; i++ )
	{
		for ( unsigned short j = 0 ; j < dimension.getWidth( ) ; j++ )
		{
			retval[i * dimension.getWidth( ) + j].setSymbol( 'x' );
		}
	}

	return retval;
}

void Gameboard::print()
{
	for ( auto positionIterator = dimension.getPositionIterator( ) ;
			positionIterator->hasNext( ) ; )
	{
		Position position = positionIterator->getNext( );
		gameboardBlock[position.getY( ) * dimension.getWidth( )
				+ position.getX( )].printSymbol( );
		if ( position.getX( ) + 1 == dimension.getWidth( ) )
			cout << endl;
	}

//	for(unsigned short i = 0; i < dimension.getHeight(); i++)
//		{
//			for(unsigned short j = 0; j < dimension.getWidth(); j++)
//			{
//				gameboardBlock[i * dimension.getWidth() + j].printSymbol();
//			}
//
//			cout << endl;
//		}
}
