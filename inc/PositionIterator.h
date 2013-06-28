/*
 * PositionIterator.h
 *
 *  Created on: 21.06.2013
 *      Author: K.Buchholz
 */

#ifndef POSITIONITERATOR_H_
#define POSITIONITERATOR_H_

#include "Position.h"

class PositionIterator
{
	public:
		PositionIterator();
		virtual ~PositionIterator();
		virtual bool hasNext() = 0;
		virtual Position getNext() = 0;
};

#endif /* POSITIONITERATOR_H_ */
