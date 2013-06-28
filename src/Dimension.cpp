/*
 * Dimension.cpp
 *
 *  Created on: 21.06.2013
 *      Author: K.Buchholz
 */

#include "Dimension.h"

Dimension::Dimension( unsigned short _weight,  unsigned short _height ) :
			height( _height ),
			width( _weight )
{

}

Dimension::~Dimension()
{

}

std::shared_ptr < DimensionPositionIterator > Dimension::getPositionIterator() const
{
	return std::shared_ptr < DimensionPositionIterator >(
			new DimensionPositionIterator( * this ) );
}
