/*
 * lavatrice.cpp
 *
 *  Created on: 29 set 2023
 *      Author: irene
 */

#include "includes/Lavatrice.hpp"
using namespace std;

Lavatrice::Lavatrice(string modello, int prezzo, int capacita, int lavaggio, int centrifuga)
: ElettrodomesticoBucato(modello, prezzo, capacita), lavaggio(lavaggio), centrifuga(centrifuga){}

Lavatrice::~Lavatrice(){}

int Lavatrice::getLavaggio() const {
	return lavaggio;
}

int Lavatrice::getCentrifuga() const {
	return centrifuga;
}

string Lavatrice::toString () const {
	return modello + "[id=" + to_string(id) + ", prezzo=" + to_string(prezzo) + " capacità=" + to_string(capacita) + " tipi lavaggio=" + to_string(lavaggio) + " tipi centrifuga=" + to_string(centrifuga) + "]";
}
