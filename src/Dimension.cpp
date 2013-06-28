/*
 * Dimension.cpp
 *
 *  Created on: 21.06.2013
 *      Author: K.Buchholz
 */

#include "Dimension.h"

Dimension::Dimension( unsigned short _height , unsigned short _weight ) :
			height( _height ),
			width( _weight )
{

}

Dimension::~Dimension()
{

}

std::shared_ptr < DimensionPositionIterator > Dimension::getIterator() const
{
	return std::shared_ptr < DimensionPositionIterator >(
			new DimensionPositionIterator( * this ) );
}