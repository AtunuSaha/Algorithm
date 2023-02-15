public class Rectangle extends Shapes{
	private float y;
	
	public Rectangle(){System.out.println("Empty Rectangle");}
	public Rectangle(float x , float y){
			super(x);		//eta first line hote hbe
			this.y =y;
		System.out.println("parameterized Rectangle");
	}
	public void setY(float y){this.y = y);}
	public void getY(){return y;}
	
	public float getArea(){ 
		return super.getX()*this.getY();} 
		
	public void showDetails(){
	 System.out.println("Length :"+super.getX()); 
	 System.out.println("Width :"+this.getY()); //("Width :" +y); dileo hbe .same class e
	 System.out.println("Area :"+this.getArea()); 
	}
	
}