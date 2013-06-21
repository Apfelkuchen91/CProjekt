/*
 * Position.h
 *
 *  Created on: 21.06.2013
 *      Author: K.Buchholz
 */

#ifndef POSITION_H_
#define POSITION_H_

class Position {
private:
	const unsigned short x;
	const unsigned short y;
public:
	Position(unsigned short _x, unsigned short _y);
	virtual ~Position();

	const unsigned short getX() const {
		return x;
	}

	const unsigned short getY() const {
		return y;
	}
};

#endif /* POSITION_H_ */
