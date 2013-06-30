/*!
 * @file	DummyConsole.h
 *
 * @date	04.06.2013
 * @author	Superuser
 * @brief	DummyConsole.h
 */

#ifndef DUMMYCONSOLE_H_
#define DUMMYCONSOLE_H_

#include "Console.h"

class DummyConsole: public Console {
public:
	DummyConsole();
	virtual ~DummyConsole();

	virtual void draw(unsigned short _x, unsigned short _y, char _symbol);
	virtual void clear();
};

#endif /* DUMMYCONSOLE_H_ */
