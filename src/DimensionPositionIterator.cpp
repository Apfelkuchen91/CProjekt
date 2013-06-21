/*
 * DimensionPositionIterator.cpp
 *
 *  Created on: 21.06.2013
 *      Author: K.Buchholz
 */

#include "DimensionPositionIterator.h"


DimensionPositionIterator::DimensionPositionIterator(Dimension _dimension):
dimension(_dimension),
position(0,0){
}

DimensionPositionIterator::~DimensionPositionIterator() {
	// TODO Auto-generated destructor stub
}

bool DimensionPositionIterator::hasNext() {
	return false;
}

Position DimensionPositionIterator::getNext() {
	return Position(0,0);
}
