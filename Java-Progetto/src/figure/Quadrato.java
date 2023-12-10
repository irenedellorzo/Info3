package figure;

//la classe Quadrato non può essere estesa perchè final
final public class Quadrato extends Rettangolo {
	
	public Quadrato (String n, double l) {
		super(n,l,l);
	}
	public double getLato() {
		return getBase();
	}
	public String toString() {
		return "[ "+ nome+": lato = " +getLato()+ " ]";
	}	
	
	// non è necessario ridefinire il metodo equals per quadrato perché 
	//il confronto definito per Rettangolo è valido anche per Quadrato
	
	public String isEquivalente(Figura altra){
		if ( altra instanceof Quadrato )
			return this.compareTo(altra) == 0 ? "I quadrati sono equivalenti" : "I quadrati non sono equivalenti";
		else
			return super.isEquivalente(altra);
		
	}
}
