/*
 * @file	Interface.h
 *
 * @date	21.05.2013
 * @author	Superuser
 * @brief	Interface.h
 */

#ifndef INTERFACE_H_
#define INTERFACE_H_

class Console
{
	public:
		Console();
		virtual ~Console();

		virtual void draw(
			unsigned short _x , unsigned short _y , char _symbol ) = 0;
		virtual void clear() = 0;
};

#endif /* INTERFACE_H_ */
