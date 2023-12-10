/*
 * Negozio.cpp
 *
 *  Created on: 10 ott 2023
 *      Author: irene
 */

#include "includes/Negozio.hpp"
#include "includes/ElettrodomesticoBucato.hpp"

#include <stdexcept>
#include <algorithm>

using namespace std;

Negozio::Negozio () {}
Negozio::~Negozio () {}

void Negozio::acquista ( sElettrodomesticoBucato elettrodomesticoBucato ) {
	this->push_back( elettrodomesticoBucato );
}

void Negozio::vendi ( wElettrodomesticoBucato elettrodomesticoBucato ) {
	this->erase(
		std::remove_if( // algorithm
			this->begin(),
			this->end(),
			[elettrodomesticoBucato](sElettrodomesticoBucato temp){return *temp==(*elettrodomesticoBucato.lock().get());}), // confronta gli indirizzi
			this->end()
	);
}

 string Negozio::toString () const {
	string res = "";
	for (auto elettrodomesticoBucato : *this) {
		res += elettrodomesticoBucato->toString() + "\n";
	}
	return res;
}

