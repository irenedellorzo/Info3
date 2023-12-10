/*
 * Asciugatrice.hpp
 *
 *  Created on: 2 ott 2023
 *      Author: irene
 */

#ifndef INCLUDES_ASCIUGATRICE_HPP_
#define INCLUDES_ASCIUGATRICE_HPP_

#include <string>

#include "ElettrodomesticoBucato.hpp"
using namespace std;

class Asciugatrice : virtual public ElettrodomesticoBucato{

public:
	Asciugatrice(string modello, int prezzo, int capacita, int asciugatura);
	virtual ~Asciugatrice();

	int getAsciugatura() const;

	virtual string toString () const;

protected:
	int asciugatura;
};



#endif /* INCLUDES_ASCIUGATRICE_HPP_ */
