/*
 * @file	Block.h
 *
 * @date	22.05.2013
 * @author	Superuser
 * @brief	Block.h
 */

#ifndef BLOCK_H_
#define BLOCK_H_

class Block {
private:
	char symbol;
public:
	Block();
	virtual ~Block();
	virtual void printSymbol();

		char getSymbol() const
		{
			return symbol;
		}

		void setSymbol( char symbol )
		{
			this->symbol = symbol;
		}
};

#endif /* BLOCK_H_ */
