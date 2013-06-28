/*
 * @file	Block.cpp
 *
 * @date	22.05.2013
 * @author	Superuser
 * @brief	Block.cpp
 */

#include <iostream>

#include "Block.h"

using namespace std;

Block::Block() :
			symbol( '*' )
{

}

Block::~Block()
{
}

void Block::printSymbol()
{
	cout << symbol;
}

