/*
 * Dimension.cpp
 *
 *  Created on: 21.06.2013
 *      Author: K.Buchholz
 */

#include "Dimension.h"
#include "DimensionPositionIterator.h"

Dimension::Dimension(unsigned short _weight, unsigned short _height) :
		height(_height), width(_weight) {

}

Dimension::~Dimension() {

}

DimensionPositionIterator Dimension::getPositionIterator() const {
	return DimensionPositionIterator(*this);
}
