/*
 * Dimension.h
 *
 *  Created on: 21.06.2013
 *      Author: K.Buchholz
 */

#ifndef DIMENSION_H_
#define DIMENSION_H_

#include <memory>

class DimensionPositionIterator;

class Dimension
{
	private:
		const unsigned short height;	//!< H&ouml;he des Spielfeldes
		const unsigned short width;	//!< Breite des Spielfeldes
	public:
		Dimension( unsigned short _height , unsigned short _weight );
		virtual ~Dimension();

		std::shared_ptr < DimensionPositionIterator > getIterator() const;

		const unsigned short getHeight() const
		{
			return height;
		}

		const unsigned short getWidth() const
		{
			return width;
		}

		const unsigned short getSize() const
		{
			return height * width;
		}
};

#include "DimensionPositionIterator.h"

#endif /* DIMENSION_H_ */
