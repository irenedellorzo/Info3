//============================================================================
// Name        : SmartSister.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>

#include "includes/Negozio.hpp"
#include "includes/Lavatrice.hpp"
#include "includes/Asciugatrice.hpp"
#include "includes/ElettrodomesticoBucato.hpp"
#include "includes/Lavasciuga.hpp"

using namespace std;

void test_negozio(){

	ElettrodomesticoBucato* E1 = new Lavatrice("AEG", 1000, 8, 3, 2);
	cout << E1->toString()<<endl;
	ElettrodomesticoBucato* E2 = new Asciugatrice("rex", 1200, 4, 1);
	cout << E2->toString()<<endl;
	ElettrodomesticoBucato* E3 = new Lavasciuga ("miele", 2000, 10, 5, 1,1);
	cout << E3->toString()<<endl<<endl;

	cout << Lavatrice("Samsung", 1000, 8, 3, 2) << endl << endl;

	Negozio negozio;
	cout<<"compro le lavatrici"<<endl;
	for ( int i = 0; i < 5; i++ )
		negozio.acquista(std::make_shared<Lavatrice> ("Lavatrice", 500*(i+1),(i+1)*5,i+3,i+1)); //acquisto le lavatrici
	cout << negozio.toString () << endl;											//visualizzo elenco elettrodomestici in negozio
	cout<<"compro le asciugatrici"<<endl;
	for ( int i = 0; i < 5; i++ )
		negozio.acquista(std::make_shared<Asciugatrice> ("Asciugatrice", 500*(i+1),(i+1)*5,i+3)); //acquisto le asciugatrici
	cout << negozio.toString () << endl<<endl;										//visualizzo elenco elettrodomestici in negozio
	auto lavasciuga = std::make_shared<Lavasciuga> ("Lavasciuga", 800,8,3,1,3);
	negozio.acquista(lavasciuga);													//acquista la lavasciuga
	cout<<"ho acquistato una lavasciuga"<<endl;
	cout << negozio.toString () << endl;											//visualizzo elenco elettrodomestici in negozio
	negozio.vendi(lavasciuga);														//vendo lavasciuga
	cout<<"Ho venduto la lavasciuga, elenco finale"<<endl;
	cout << negozio.toString () << endl;


    //vector<shared_ptr<ElettrodomesticoBucato>> lavatrici = negozio.filtraPerTipo<Lavatrice>();




	/*Lavatrice l1("Aeg", 1000, 8, 3, 2);
	cout<<"\n\nLavatrice\nmodello: "<<l1.getModello()<<"\nprezzo: "<<l1.getPrezzo()<<"\ncapacità: "<<l1.getCapacita()<<"\n numero lavaggi: "<<l1.getLavaggio()<<"\n tipi centrifughe: "<<l1.getCentrifuga();
	Asciugatrice a1("rex", 1200, 4, 1);
	cout<<"\n\nAsciugatrice\nmodello: "<<a1.getModello()<<"\nprezzo: "<<a1.getPrezzo()<<"\ncapacità: "<<a1.getCapacita()<<"\nnumero programmi di asciugatura: "<<a1.getAsciugatura();
	Lavasciuga la("miele", 2000, 10, 5, 1,1);
	cout<<"\n\nLavasciuga\nmodello: "<<la.getModello()<<"\nprezzo: "<<la.getPrezzo()<<"\ncapacità: "<<la.getCapacita()<<"\nnumero lavaggi: "<<la.getLavaggio()<<"\ntipi centrifughe: "<<la.getCentrifuga()<<"\nprogrammi di asciugatura: "<<la.getAsciugatura();
	*/


}

int main() {
	cout << "!!!Benvenuti nel negozio SMART SISTER!!!" << endl<<endl;
	//ElettrodomesticiBucato el1("Samsung", 800, 10);
	//cout<<"\n Elettrodomestico per il bucato\n modello: "<<el1.getModello()<<"\nprezzo: "<<el1.getPrezzo()<<"\ncapacità: "<<el1.getCapacita()<<"\n";

	test_negozio();

	return 0;
}
