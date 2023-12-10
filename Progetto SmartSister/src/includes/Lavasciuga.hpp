
/*
 * Lavasciuga.hpp
 *
 *  Created on: 3 ott 2023
 *      Author: irene
 */

#ifndef INCLUDES_LAVASCIUGA_HPP_
#define INCLUDES_LAVASCIUGA_HPP_

#include <string>
#include "Lavatrice.hpp"
#include "Asciugatrice.hpp"
using namespace std;

class Lavasciuga : public Lavatrice, public Asciugatrice{

public:
	Lavasciuga (string modello, int prezzo, int capacita, int lavaggio, int centrifuga, int asciugatura);
	virtual ~Lavasciuga();

	virtual string toString () const;

};


#endif /* INCLUDES_LAVASCIUGA_HPP_ */
