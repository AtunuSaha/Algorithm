public class Shapes{
	private float x; // instance variable
	public Shapes(){
		System.out.println("Empty Shape");
	}
     public Shapes(float x ){
		 this.x = x; //this diye instance variable ke mention kortesi
		System.out.println("PARAMETERIZED SHAPE");
	}
	public void setX(float x){this.x = x;}
	public float getX(){return this.x;}
	
	public void showDetails(){
		System.out.println("Not a specific shape ");
	}
	
}