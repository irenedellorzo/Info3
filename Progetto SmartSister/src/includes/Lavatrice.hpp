/*
 * lavatrice.hpp
 *
 *  Created on: 29 set 2023
 *      Author: irene
 */

#ifndef LAVATRICE_HPP_
#define LAVATRICE_HPP_

#include <string>

#include "ElettrodomesticoBucato.hpp"
using namespace std;

class Lavatrice : virtual public ElettrodomesticoBucato{

public:
	Lavatrice (string modello, int prezzo, int capacita, int lavaggio, int centrifuga);
	virtual ~Lavatrice();

	int getLavaggio() const;
	int getCentrifuga() const;

	virtual string toString () const;

protected:
		int lavaggio;
		int centrifuga;

};



#endif /* LAVATRICE_HPP_ */
