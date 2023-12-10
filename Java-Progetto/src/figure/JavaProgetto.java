package figure;



public class JavaProgetto {
	public static double sommaAree(double...area) {
		double somma = 0;
		for(double a : area)
			somma+=a;
		return somma;
	}
	public static void main (String[] args) {
		Rettangolo rett = new Rettangolo("R1",2,3);
		Rettangolo rett2 = new Rettangolo("R2",4,5);
		Rettangolo rett3 = new Rettangolo("R3",2,3);
		Rettangolo rett4 = new Rettangolo("R4",4,4);
		Quadrato quad = new Quadrato("Q1",4);
		Quadrato quad2 = new Quadrato("Q2",10);
		
		System.out.println(rett);
		System.out.println(rett2);
		System.out.println(rett3);
		System.out.println(rett4);
		System.out.println(quad);
		System.out.println(quad2);
		
		System.out.println("Calcolo l'area di R1");
		System.out.println(rett.calcolaArea());	
		
		System.out.println("Calcolo l'area di Q1");
		System.out.println(quad.calcolaArea());		
		
		System.out.println("R1 è uguale a R2?");
		System.out.println(rett.equals(rett2));
			
		System.out.println("Q1 è uguale a R4?");
		System.out.println(quad.equals(rett4));	
		
		System.out.println("R2 è minore di R1?");
		System.out.println(rett2.isMinore(rett));
		
		System.out.println("Q1 è minore di Q2?");
		System.out.println(quad.isMinore(quad2));
		
		System.out.println("compare di R2 e R1");
		System.out.println(rett2.compareTo(rett));
		
		System.out.println("compare di Q1 e Q1");
		System.out.println(quad.compareTo(quad));
		
		System.out.println("R4 è equivalente a R4?");
		System.out.println(rett4.isEquivalente(rett4));
		
		System.out.println("Q1 è equivalente a Q1?");
		System.out.println(quad.isEquivalente(quad));
		System.out.println("Q1 è equivalente a R4?");
		System.out.println(quad.isEquivalente(rett4));
		
		System.out.println("Creo una lista di figure usando R1, R2, R3, Q1, Q2");
		ListaFigure<Figura> elencoFig = new ListaFigure<Figura>();
		elencoFig.insert(rett);
		elencoFig.insert(rett2);
		elencoFig.insert(rett3);
		elencoFig.insert(quad);
		elencoFig.insert(quad2);
		
		System.out.println("Stampo la lista di figure");
		System.out.println(elencoFig);
				
		System.out.println("Ordino la lista e la stampo");
		elencoFig.ordina();
		System.out.println(elencoFig);
		
		System.out.println("Calcolo le aree di R1, R2, R3 e stampo la loro somma:");		
		double a1 = rett.calcolaArea();
		double a2 = rett2.calcolaArea();
		double a3 = rett3.calcolaArea();
		System.out.println(sommaAree(a1,a2,a3));
		
		System.out.println("Stampo la somma delle aree di R1 e R2:");
		System.out.println(sommaAree(a1,a2));
		
		System.out.println("Test per Binding Dinamico:");
		Rettangolo r5 = new Quadrato ("Q3",7);	
		System.out.println(r5.equals(rett2));
		System.out.println(r5.isMinore(rett));
		System.out.println(r5.compareTo(rett));
		System.out.println(r5.isEquivalente(quad));
		System.out.println(r5.getBase());
		Figura f1 = new Rettangolo("F1",1,3);
		System.out.println(f1);
		

		
	}
}
