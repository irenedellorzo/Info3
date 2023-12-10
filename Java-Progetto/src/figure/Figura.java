package figure;

public abstract class Figura implements Comparable<Figura> {
	//protected in modo che sia visibile alle sottoclassi
	protected String nome;
	
	public int compareTo(Figura altraFigura) {
		return this.nome.compareTo(altraFigura.nome);
	}
	
	public String isEquivalente(Figura altra) {
		return "Non è possibile stabilire se due figure sono equivalenti senza sapere che tipo di figure sono";
	}
	
	public String toString() {
		return "[ "+ nome + " ]";
	}
}
