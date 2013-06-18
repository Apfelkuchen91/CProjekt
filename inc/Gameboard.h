/*!
 * @file	Gameboard.h
 *
 * @date	14.06.2013
 * @author	Superuser
 * @brief	Headerdatei f&uuml;r Spielfeld
 */

#ifndef GAMEBOARD_H_
#define GAMEBOARD_H_

#include "Block.h"

/*!
 * \brief Grundklasse f&uuml;r das Spielfeld
 */
class Gameboard
{
	private:
		const unsigned short height;	//!< H&ouml;he des Spielfeldes
		const unsigned short weight;	//!< Breite des Spielfeldes
		Block * gamebordBlock;			//!< Array für die Bl&ouml;cke auf dem Spielfeld

		Block * createGamebord();
		void deleateGameboard();


	public:
		/*!
		 * Konstruktr
		 * @param _height	H&ouml;he des Spielsteines
		 * @param _weight	Breite des Spielsteines
		 */
		Gameboard(const unsigned short _height, const unsigned short _weight);
		/*!
		 * Destuktor
		 */
		virtual ~Gameboard();

		/*!
		 * Gibt das Spielfeld auf dem Bildschrim aus.
		 * Start an der aktuellen Couser position.
		 */
		virtual void print();
};

#endif /* GAMEBOARD_H_ */
