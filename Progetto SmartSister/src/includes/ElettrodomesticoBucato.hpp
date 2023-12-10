/*
 * elettrodomesticiBucato.hpp
 *
 *  Created on: 29 set 2023
 *      Author: irene
 */

#ifndef ELETTRODOMESTICIBUCATO_HPP_
#define ELETTRODOMESTICIBUCATO_HPP_

#include <string>
#include <memory>
using namespace std;

class ElettrodomesticoBucato {
public:
	ElettrodomesticoBucato (string modello, int prezzo, int capacita);
	virtual ~ElettrodomesticoBucato ();

	string getModello () const;
	int getPrezzo () const;
	int getCapacita () const;
	int getId () const;

	virtual string toString () const;

	bool operator==(const ElettrodomesticoBucato& c) const;

	// rendo accessibili i campi privati
	friend ostream& operator<< (std::ostream& os, const ElettrodomesticoBucato& elettrodomesticiBucato);

protected:
	string modello;
	int prezzo;
	int capacita;
	int id;

private:
	static int idContatore;
};

typedef std::unique_ptr<ElettrodomesticoBucato> uElettrodomesticoBucato;
typedef std::shared_ptr<ElettrodomesticoBucato> sElettrodomesticoBucato;
typedef std::weak_ptr<ElettrodomesticoBucato> wElettrodomesticoBucato;


#endif /* ELETTRODOMESTICIBUCATO_HPP_ */
