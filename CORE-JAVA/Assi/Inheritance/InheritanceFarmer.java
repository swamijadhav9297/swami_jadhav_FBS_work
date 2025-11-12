class Farmer {
int FarmerId;
String FarmerName;
double LandArea;
String City;
double AnnualIncoume;
int NoOfEqupment;
double InsuranceAmount;

Farmer()
{
	FarmerId = 89;
	FarmerName = "bhikaji jadhav";
	LandArea = 100;
	City = "solapur";
	AnnualIncoume = 4567876;
	NoOfEqupment = 45;
	InsuranceAmount = 876567;
	
}

	Farmer(int farmerId, String farmerName, double landArea, String city, double annualIncoume, int noOfEqupment,
		double insuranceAmount) {
	super();
	this.FarmerId = farmerId;
	this.FarmerName = farmerName;
	this.LandArea = landArea;
	this.City = city;
	this.AnnualIncoume = annualIncoume;
	this.NoOfEqupment = noOfEqupment;
	this.InsuranceAmount = insuranceAmount;
}

public int getFarmerId() {
	return FarmerId;
}

public void setFarmerId(int farmerId) {
	FarmerId = farmerId;
}

public String getFarmerName() {
	return FarmerName;
}

public void setFarmerName(String farmerName) {
	FarmerName = farmerName;
}

public double getLandArea() {
	return LandArea;
}

public void setLandArea(double landArea) {
	LandArea = landArea;
}

public String getCity() {
	return City;
}

 void setCity(String city) {
	City = city;
}

 double getAnnualIncoume() {
	return AnnualIncoume;
}

 void setAnnualIncoume(double annualIncoume) {
	AnnualIncoume = annualIncoume;
}

 int getNoOfEqupment() {
	return NoOfEqupment;
}

 void setNoOfEqupment(int noOfEqupment) {
	NoOfEqupment = noOfEqupment;
}

 double getInsuranceAmount() {
	return InsuranceAmount;
}

 void setInsuranceAmount(double insuranceAmount) {
	InsuranceAmount = insuranceAmount;
}

 void display()
 {
	 System.out.println("This is farmer id :"+this.FarmerId);
	 System.out.println("This is farmer 	Name :"+this.FarmerName);
	 System.out.println("This is farmer landArea :"+this.LandArea);
	 System.out.println("This is farmer city :"+this.City);
	 System.out.println("This is farmer annualIncoume :"+this.AnnualIncoume);
	 System.out.println("This is farmer noOfEqupment :"+this.NoOfEqupment);
	 System.out.println("This is farmer insuranceAmount :"+this.InsuranceAmount);
	 System.out.println("------------------------");
		
 }
}
 
 
 class DairyFarmer extends	Farmer
 {
	 int NoOfCattles;
	 int MilkProducedPerdect;
	 int DairyLicenceNo;
	 
	 DairyFarmer()
	 {
		NoOfCattles = 678;
		MilkProducedPerdect = 567;
		DairyLicenceNo = 766;
		 
	 }

	 DairyFarmer(int noOfCattles, int milkProducedPerdect, int dairyLicenceNo) {
		super();
		this.NoOfCattles = noOfCattles;
		this.MilkProducedPerdect = milkProducedPerdect;
		this.DairyLicenceNo = dairyLicenceNo;
	}

	public int getNoOfCattles() {
		return NoOfCattles;
	}

	public void setNoOfCattles(int noOfCattles) {
		NoOfCattles = noOfCattles;
	}

	public int getMilkProducedPerdect() {
		return MilkProducedPerdect;
	}

	public void setMilkProducedPerdect(int milkProducedPerdect) {
		MilkProducedPerdect = milkProducedPerdect;
	}

	public int getDairyLicenceNo() {
		return DairyLicenceNo;
	}

	public void setDairyLicenceNo(int dairyLicenceNo) {
		DairyLicenceNo = dairyLicenceNo;
	}
	
	void display()
	 {
		 System.out.println("This is farmer NoOfCattles :"+this.NoOfCattles);
		 System.out.println("This is farmer	MilkProducedPerdect :"+this.MilkProducedPerdect);
		 System.out.println("This is farmer DairyLicenceNo :"+this.DairyLicenceNo);
		 System.out.println("------------------------");
			
	 }
	 
 }
 
 class Poaltryfarme extends Farmer
 {
	 int NoOfChickenHens;
	 int NoOfShedCapacity;
	 int EggsProducedDay;
	 String PoaltryFarmName;
	 
	 Poaltryfarme()
	 {
		NoOfChickenHens = 5677;
		NoOfShedCapacity = 5;
		EggsProducedDay = 50000;
		PoaltryFarmName = "amit poaltryfram";
		 
	 }

	public Poaltryfarme(int noOfChickenHens, int noOfShedCapacity, int eggsProducedDay, String poaltryFarmName) {
		super();
		NoOfChickenHens = noOfChickenHens;
		NoOfShedCapacity = noOfShedCapacity;
		EggsProducedDay = eggsProducedDay;
		PoaltryFarmName = poaltryFarmName;
	}

	public int getNoOfChickenHens() {
		return NoOfChickenHens;
	}

	public void setNoOfChickenHens(int noOfChickenHens) {
		NoOfChickenHens = noOfChickenHens;
	}

	public int getNoOfShedCapacity() {
		return NoOfShedCapacity;
	}

	public void setNoOfShedCapacity(int noOfShedCapacity) {
		NoOfShedCapacity = noOfShedCapacity;
	}

	public int getEggsProducedDay() {
		return EggsProducedDay;
	}

	public void setEggsProducedDay(int eggsProducedDay) {
		EggsProducedDay = eggsProducedDay;
	}

	public String getPoaltryFarmName() {
		return PoaltryFarmName;
	}

	public void setPoaltryFarmName(String poaltryFarmName) {
		PoaltryFarmName = poaltryFarmName;
	}
	 
	void display()
	 {
		 System.out.println("This is farmer NoOfCattles :"+this.NoOfChickenHens);
		 System.out.println("This is farmer	MilkProducedPerdect :"+this.NoOfShedCapacity);
		 System.out.println("This is farmer DairyLicenceNo :"+this.EggsProducedDay);
		 System.out.println("This is farmer DairyLicenceNo :"+this.PoaltryFarmName);
		 System.out.println("------------------------");
			
	 }
 }
 
 class OrganicFarms extends Farmer
 {
	 int organicId;
	 String CropType;
	 String FertilizarUsed;
	 
	 OrganicFarms()
	 {
		organicId = 87654;
		CropType = "soybine";
		FertilizarUsed = "uriya";
	 }

	public OrganicFarms(int organicId, String cropType, String fertilizarUsed) {
		super();
		this.organicId = organicId;
		this.CropType = cropType;
		this.FertilizarUsed = fertilizarUsed;
	}

	public int getOrganicId() {
		return organicId;
	}

	public void setOrganicId(int organicId) {
		this.organicId = organicId;
	}

	public String getCropType() {
		return CropType;
	}

	public void setCropType(String cropType) {
		CropType = cropType;
	}

	public String getFertilizarUsed() {
		return FertilizarUsed;
	}

	public void setFertilizarUsed(String fertilizarUsed) {
		FertilizarUsed = fertilizarUsed;
	}
	 
	void display()
	 {
		 System.out.println("This is farmer NoOfCattles :"+this.organicId);
		 System.out.println("This is farmer	MilkProducedPerdect :"+this.CropType);
		 System.out.println("This is farmer DairyLicenceNo :"+this.FertilizarUsed);
		 System.out.println("------------------------");
			
	 }
 }
 
 class RegisterFarmer
 {
 	public static void main(String args[])
 	{
 		Farmer F1=new Farmer();
 		F1.display();
 		
 		DairyFarmer DF1=new DairyFarmer(6543,654,435);
 		DF1.display();
 		
 		Poaltryfarme PF1=new Poaltryfarme();
 		PF1.display();
 		
 		OrganicFarms OF1=new OrganicFarms();
 		OF1.display();
 	}
 }
