
public class Engine {
	double PowerOutput;
	String FuelType;
	
	Engine()
	{
		PowerOutput = 4567.98;
		FuelType = "petrol";
	}
	
	public Engine(double powerOutput, String fuelType) {
		super();
		this.PowerOutput = powerOutput;
		this.FuelType = fuelType;
	}
	

	public double getPowerOutput() {
		return PowerOutput;
	}

	public void setPowerOutput(double powerOutput) {
		PowerOutput = powerOutput;
	}

	public String getFuelType() {
		return FuelType;
	}

	public void setFuelType(String fuelType) {
		FuelType = fuelType;
	}

	void display()
	{
		System.out.println("The PowerOutput is :"+this.PowerOutput);
		System.out.println("The FuelType is :"+this.FuelType);
	}
}

class  DieselEngine extends Engine
{
	double CompressionRatio;
	
	DieselEngine()
	{
		CompressionRatio = 45678;
	}
	
	public DieselEngine(double compressionRatio) {
		super();
		this.CompressionRatio = compressionRatio;
	}
	

	public double getCompressionRatio() {
		return CompressionRatio;
	}

	public void setCompressionRatio(double compressionRatio) {
		CompressionRatio = compressionRatio;
	}

	void display()
	{
		System.out.println("The CompressionRatio is :"+this.CompressionRatio);
	}
}

class  PetrolEngine extends Engine
{
	String IgnitionType;
	
	PetrolEngine()
	{
		IgnitionType = "fghjkm";
	}

	public PetrolEngine(String ignitionType) {
		super();
		this.IgnitionType = ignitionType;
	}

	public String getIgnitionType() {
		return IgnitionType;
	}

	public void setIgnitionType(String ignitionType) {
		IgnitionType = ignitionType;
	}
	
	void display()
	{
		System.out.println("The IgnitionType is :"+this.IgnitionType);
	}
}

class InheritanceEngine
{
	public static void main(String args[])
	{
		Engine E1=new Engine();
		E1.display();
		
		DieselEngine D1=new DieselEngine();
		D1.display();
		
		PetrolEngine P1=new PetrolEngine();
		P1.display();
	}
}