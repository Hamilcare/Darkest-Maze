import java.lang.*;	


/**
 * La classe <b>Coord<b> permet de reprensenter des points en 2D 
 * @author Hamilcare
 * @version 0.0.1
 */
public class Coord{
	
	protected int abs;
	protected int ord;
	
	
	//Builders 
	public Coord (){
		this.abs=0;
		this.ord=0;
	}
	
	public Coord(int x, int y){
		this.abs=x;
		this.ord=y;
	}
	
	public Coord(Coord c){
		this.abs=c.abs;
		this.ord=c.ord;
	}
	
	
	//To String
	public String toString(){
		String s = "";
		s+="("+this.abs+","+this.ord+")\n";
		return s;
	}
	
	
	//Getters
	public int get_x(){
		return this.abs;
	}
	
	public int get_y(){
		return this.ord;
	}
	
	
	//Setters
	public void set_x(int x){
		this.abs =x;
	}
	
	public void set_y(int y){
		this.ord=y;
	}
	
	
	/* Renvoie la distance entre deux points*/
	public double distance(Coord c){
		double  tempo;
		return tempo = Math.sqrt( ((c.abs-this.abs)*(c.abs-this.abs)) + ((c.ord-this.ord)*(c.ord-this.ord)) );
		
	}
		
	
	
	
	
	public static void main (String[] args){
		Coord c1 = new Coord();
		Coord c2 = new Coord(4,2);
		Coord c3 = new Coord(c2);
		
		System.out.println(c1 +""+ c2 +""+ c3);
		System.out.println(c1.distance(c2));
		
	}
		
		
		
}
	
	
	
	
	
	
	
	
