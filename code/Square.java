public class Square extends Shape{
	public Square(){System.out.println("Empty Square");}
	public Square(float x){
		super(x); //eta first line hote hbe
		System.out.println("parameterized square");
	}
	public float getArea(){ 
		return super.getX()*super.getX();} //note get
		
	public void showDetails(){
	 System.out.println("Length :"+super.getX()); //super diye ager parent class ke bujhaisi
	 System.out.println("Area :"+this.getArea()); //this current class ke mention kore	 
	}		
}