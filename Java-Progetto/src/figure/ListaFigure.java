package figure;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class ListaFigure< T extends Figura> {
   
	private List<T> figure;

    public ListaFigure() {
        this.figure = new ArrayList<>();
    }
//throw
    public void insert(T figura) {
    	if (figura == null) {
            throw new IllegalArgumentException("Impossibile inserire un oggetto nullo nella lista");
        }
        figure.add(figura);
    }
    
    public String toString() {
		return figure.toString();
	}
    //collections
    public void ordina() {
		Collections.sort(figure);
	}
    
}