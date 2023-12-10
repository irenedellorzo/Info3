/*
 * Asciugatrice.cpp
 *
 *  Created on: 2 ott 2023
 *      Author: irene
 */

#include "includes/Asciugatrice.hpp"
using namespace std;

Asciugatrice::Asciugatrice(string modello, int prezzo, int capacita, int asciugatura)
: ElettrodomesticoBucato(modello, prezzo, capacita), asciugatura(asciugatura){}

Asciugatrice::~Asciugatrice(){}

int Asciugatrice::getAsciugatura() const {
	return asciugatura;
}

string Asciugatrice::toString () const {
	return modello + "[id=" + to_string(id) + ", prezzo=" + to_string(prezzo) + " capacità=" + to_string(capacita) + "tipi asciugatura=" + to_string(asciugatura) + "]";

}

