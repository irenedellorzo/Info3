package figure;

//la classe Quadrato non pu� essere estesa perch� final
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
	
	// non � necessario ridefinire il metodo equals per quadrato perch� 
	//il confronto definito per Rettangolo � valido anche per Quadrato
	
	public String isEquivalente(Figura altra){
		if ( altra instanceof Quadrato )
			return this.compareTo(altra) == 0 ? "I quadrati sono equivalenti" : "I quadrati non sono equivalenti";
		else
			return super.isEquivalente(altra);
		
	}
}
