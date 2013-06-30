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
	unsigned short x;
	unsigned short y;
public:
	Position(unsigned short _x, unsigned short _y);
	virtual ~Position();

	const unsigned short getX() const {
		return x;
	}

	const unsigned short getY() const {
		return y;
	}

	void setX(unsigned short x) {
		this->x = x;
	}

	void setY(unsigned short y) {
		this->y = y;
	}

	void setPosition(unsigned short x, unsigned short y) {
		this->x = x;
		this->y = y;
	}
};

#endif /* POSITION_H_ */
