/*
 * negozio.hpp
 *
 *  Created on: 10 ott 2023
 *      Author: irene
 */

#ifndef INCLUDES_NEGOZIO_HPP_
#define INCLUDES_NEGOZIO_HPP_

#include <vector>
#include <memory>

#include "ElettrodomesticoBucato.hpp"

using namespace std;

class Negozio : private vector<sElettrodomesticoBucato> {
public:
	Negozio ();
	virtual ~Negozio ();

	void acquista ( sElettrodomesticoBucato );
	//void insertRandom ( sElettrodomesticoBucato );
	void vendi ( wElettrodomesticoBucato );

	string toString () const;


	using vector<sElettrodomesticoBucato>::size;
	using vector<sElettrodomesticoBucato>::empty;
};


#endif /* INCLUDES_NEGOZIO_HPP_ */
