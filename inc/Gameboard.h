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
#include "Dimension.h"

/*!
 * \brief Grundklasse f&uuml;r das Spielfeld
 */
class Gameboard
{
	private:
		Dimension dimension;
		Block * gamebordBlock;			//!< Array für die Bl&ouml;cke auf dem Spielfeld

		Block * createGamebord();
		void deleateGameboard();


	public:
		/*!
		 * Konstruktr
		 * @param _height	H&ouml;he des Spielsteines
		 * @param _weight	Breite des Spielsteines
		 */
		Gameboard(Dimension _dimension);
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
