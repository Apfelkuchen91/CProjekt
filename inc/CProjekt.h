/*!
 * @file	CProjekt.h
 *
 * @date	21.06.2013
 * @author	Superuser
 * @brief	CProjekt.h
 */

#ifndef CPROJEKT_H_
#define CPROJEKT_H_

#include "Console.h"

class CProjekt
{
	private:
		Console * console;

		void init();

	public:
		CProjekt();
		virtual ~CProjekt();
		void run();
};

#endif /* CPROJEKT_H_ */
