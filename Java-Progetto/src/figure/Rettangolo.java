package figure;

public class Rettangolo extends Figura implements Calcola{
	//voglio nascondere l'implementazione della classe, quindi dichiaro i campi private
	private double base, altezza;
	//costruttore
	public Rettangolo (String n, double b, double h) {
		nome = n;
		base = b;
		altezza = h; 
	}
	//implementazione dell'interfaccia Calcola
	public double calcolaArea() {
		return base*altezza;
	}
	
	public double calcolaPerimetro() {
		return 2*(base+altezza);
	}
	
	public double getAltezza() {
		return altezza;
	}
	
	public double getBase() {
		return base;
	}
	
	public String toString() {
		return "[ "+nome+": base = "+base+", altezza = "+altezza + " ]";
	}
	
	public boolean equals(Rettangolo altro) {
		return this.base == altro.base && this.altezza == altro.altezza;
	}
	//Overriding di equals di Object per sfruttare il polimorfismo: 
	//in compilazione viene selezionata la segnatura di equals con parametro Object
	//questo metodo ha il compito di controllare il tipo dell'oggetto fornito come parametro, se
	//si tratta di un rettangolo, delega al metodo equals con parametro Rettangolo
	@Override
	public boolean equals(Object o) {
		if (o instanceof Rettangolo) 
			return equals((Rettangolo) o);
		else return false;
	}
	
	// il parametro di comparazione è l'area
	@Override
	public int compareTo(Figura altra) {
		if (!(altra instanceof Rettangolo)) {
	        throw new IllegalArgumentException("L'oggetto deve essere di tipo Rettangolo");
	    }
		Rettangolo r = (Rettangolo) altra;
		return this.calcolaArea() == r.calcolaArea() ? 0 : this.isMinore(r) ? -1 : 1;	
	}	
	
	public boolean isMinore(Rettangolo altro) {
		return this.calcolaArea() < altro.calcolaArea() ? true : false;
	}
	
	public String isEquivalente(Figura altra){
		if (altra instanceof Rettangolo || altra instanceof Quadrato ) 
			return this.compareTo((Rettangolo)altra) == 0 ? "I rettangoli sono equivalenti" : "I rettangoli non sono equivalenti";
		else
			return super.isEquivalente(altra);
	}

}
