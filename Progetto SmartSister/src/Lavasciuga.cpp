/*
 * Lavasciuga.cpp
 *
 *  Created on: 3 ott 2023
 *      Author: irene
 */

#include "includes/Lavasciuga.hpp"
using namespace std;

Lavasciuga::Lavasciuga (string modello, int prezzo, int capacita, int lavaggio, int centrifuga, int asciugatura)
: ElettrodomesticoBucato (modello, prezzo, capacita), Lavatrice (modello, prezzo, capacita, lavaggio, centrifuga), Asciugatrice (modello, prezzo, capacita, asciugatura) {}

Lavasciuga::~Lavasciuga () {}

string Lavasciuga::toString () const {
	return modello + "[id=" + to_string(id) + ", prezzo=" + to_string(prezzo) + " capacità=" + to_string(capacita) + " tipi lavaggio=" + to_string(lavaggio) + " tipi centrifuga=" + to_string(centrifuga) + " tipi asciugatura=" + to_string(asciugatura) + "]";

}



