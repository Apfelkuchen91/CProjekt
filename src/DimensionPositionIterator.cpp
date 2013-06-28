/*
 * DimensionPositionIterator.cpp
 *
 *  Created on: 21.06.2013
 *      Author: K.Buchholz
 */

#include "DimensionPositionIterator.h"

DimensionPositionIterator::DimensionPositionIterator( Dimension _dimension ) :
			dimension( _dimension ),
			position( 0 , 0 )
{
}

DimensionPositionIterator::~DimensionPositionIterator()
{
	// TODO Auto-generated destructor stub
}

bool DimensionPositionIterator::hasNext()
{
	bool retval = ( ( position.getX( ) < dimension.getWidth( ) )
			&& ( position.getY( ) < dimension.getHeight( ) ) );

	if ( retval )
		position.setPosition( 0 , 0 );

	return retval;
}

Position DimensionPositionIterator::getNext()
{
	unsigned short x = position.getX( );
	unsigned short y = position.getY( );

	if ( ++x >= dimension.getWidth( ) )
	{
		x = 0;
		y++;
	}

	position.setPosition( x , y );

	return position;
}
