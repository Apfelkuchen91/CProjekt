/*!
 * @file	CProjekt.cpp
 *
 * @date	21.06.2013
 * @author	Superuser
 * @brief	CProjekt.cpp
 */

#include <windows.h>

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

#include "CProjekt.h"
#include "Dimension.h"

CProjekt::CProjekt() :
		gameboard(new Gameboard(Dimension(15, 30))), beenden(false) {
	init();
}

CProjekt::~CProjekt() {
	delete gameboard;
}

void CProjekt::init() {
	srand(time(NULL)); //! Initialize random number generator.
}

void CProjekt::run() {
	while (beenden == false) {
		gameboard->print();

		beenden = true; // Nur ein durchgang.
	}

}
