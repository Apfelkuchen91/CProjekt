/*
 * @file	Console.h
 *
 * @date	21.05.2013
 * @author	Superuser
 * @brief	Console.h
 */

#ifndef WINDOWSCONSOLE_H_
#define WINDOWSCONSOLE_H_

#include "Console.h"

class WindowsConsole : public Console
{
	private:


	public:
		WindowsConsole();
		virtual ~WindowsConsole();

		int oberflaeche();
		int anleitung();
		void set_console( short breite , short hoehe );
};

#endif /* WINDOWSCONSOLE_H_ */
