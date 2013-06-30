/*
 * DimensionPositionIterator.h
 *
 *  Created on: 21.06.2013
 *      Author: K.Buchholz
 */

#ifndef DIMENSIONPOSITIONITERATOR_H_
#define DIMENSIONPOSITIONITERATOR_H_

#include "PositionIterator.h"
#include "Dimension.h"

class DimensionPositionIterator: public PositionIterator {
private:
	const Dimension dimension;
	Position position;
public:
	DimensionPositionIterator(Dimension _dimension);
	virtual ~DimensionPositionIterator();
	bool hasNext();
	Position getNext();

};

#endif /* DIMENSIONPOSITIONITERATOR_H_ */
