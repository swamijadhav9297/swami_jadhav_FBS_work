class LivingOrganism {
	String Name;
	int Lifespan;
	
	LivingOrganism()
	{
		Name = "no name";
		Lifespan = 123;
	}

	public LivingOrganism(String name, int lifespan) {
		super();
		this.Name = name;
		this.Lifespan = lifespan;
	}

	public String getName() {
		return Name;
	}

	public void setName(String name) {
		Name = name;
	}

	public int getLifespan() {
		return Lifespan;
	}

	public void setLifespan(int lifespan) {
		Lifespan = lifespan;
	}
	void display()
	{
		System.out.println("The name is :"+this.Name );
		System.out.println("The Lifespan is "+this.Lifespan );
	}
}

class  Plant extends LivingOrganism
{
	double PhotosynyhesisRate;
	
	Plant()
	{
		PhotosynyhesisRate = 23454.34;
	}
	
	Plant(double photosynyhesisRate) {
		super();
		PhotosynyhesisRate = photosynyhesisRate;
	}

	public double getPhotosynyhesisRate() {
		return PhotosynyhesisRate;
	}

	public void setPhotosynyhesisRate(double photosynyhesisRate) {
		PhotosynyhesisRate = photosynyhesisRate;
	}

	void display()
	{
		System.out.println("The PhotosynyhesisRate is :"+this.PhotosynyhesisRate);
	
	}
}
class  Animal extends LivingOrganism
{
	String MoveType;
	
	Animal()
	{
		MoveType ="fghj";
	}

	public Animal(String moveType) {
		super();
		this.MoveType = moveType;
	}

	public String getMoveType() {
		return MoveType;
	}

	public void setMoveType(String moveType) {
		MoveType = moveType;
	}
	
	void display()
	{
		System.out.println("The MoveType is :"+this.MoveType);
	
	}
}
class InheritanceLivingOrganism
{
	public static void main(String args[])
	{
		LivingOrganism LO1=new LivingOrganism();
		LO1.display();
		
		Plant P1=new Plant();
		P1.display();
		
		Animal A1=new Animal();
		A1.display();
	}
}