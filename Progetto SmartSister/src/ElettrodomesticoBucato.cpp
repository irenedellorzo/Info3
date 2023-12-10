/*
 * elettrodomesticiBucato.cpp
 *
 *  Created on: 29 set 2023
 *      Author: irene
 */
#include "includes/ElettrodomesticoBucato.hpp"
using namespace std;

int ElettrodomesticoBucato::idContatore = 0;

ElettrodomesticoBucato::ElettrodomesticoBucato (string modello, int prezzo, int capacita)
: modello(modello), prezzo(prezzo), capacita(capacita), id(++idContatore) {}

ElettrodomesticoBucato::~ElettrodomesticoBucato () {}

string ElettrodomesticoBucato::getModello() const{
	return modello;
}

int ElettrodomesticoBucato::getPrezzo() const{
	return prezzo;
}

int ElettrodomesticoBucato::getCapacita() const{
	return capacita;
}

int ElettrodomesticoBucato::getId() const{
	return id;
}

string ElettrodomesticoBucato::toString () const {
	return modello + "[id=" + to_string(id) + ", prezzo=" + to_string(prezzo) + " capacità=" + to_string(capacita)+"]";
}

// overload
ostream& operator<< (std::ostream& os, const ElettrodomesticoBucato& elettrodomesticiBucato) {
	os << elettrodomesticiBucato.toString();
	return os;
}

bool ElettrodomesticoBucato::operator==(const ElettrodomesticoBucato& e) const {
  return this->id == e.id;
}
