class Defence {
	String NameOfHead;
	int NoOfTroops;
	double Budget;
	int NoOfDept;
	int NoOfVehiCount;
	static int count=0;
	Defence()
	{
		NameOfHead = "genral bhupendra";
		NoOfTroops = 6789;
		Budget = 4567876;
		NoOfDept = 678;
		NoOfVehiCount =678;
		count++;
	}//default

	public Defence(String nameOfHead, int noOfTroops, double budget, int noOfDept, int noOfVehiCount) {
		super();
		this.NameOfHead = nameOfHead;
		this.NoOfTroops = noOfTroops;
		this.Budget = budget;
		this.NoOfDept = noOfDept;
		this.NoOfVehiCount = noOfVehiCount;
		count++;
	}

	public String getNameOfHead() {
		return NameOfHead;
	}

	public void setNameOfHead(String nameOfHead) {
		NameOfHead = nameOfHead;
	}

	public int getNoOfTroops() {
		return NoOfTroops;
	}

	public void setNoOfTroops(int noOfTroops) {
		NoOfTroops = noOfTroops;
	}

	public double getBudget() {
		return Budget;
	}

	public void setBudget(double budget) {
		Budget = budget;
	}

	public int getNoOfDept() {
		return NoOfDept;
	}

	public void setNoOfDept(int noOfDept) {
		NoOfDept = noOfDept;
	}

	public int getNoOfVehiCount() {
		return NoOfVehiCount;
	}

	public void setNoOfVehiCount(int noOfVehiCount) {
		NoOfVehiCount = noOfVehiCount;
	}
	
	public static int getCount() {
		return count;
	}

	public static void setCount(int count) {
		Defence.count = count;
	}

	void display()
	{
		System.out.println("The name of head"+this.NameOfHead);
		System.out.println("The numbers of troops"+this.NoOfTroops );
		System.out.println("The buget is"+this.Budget);
		System.out.println("The numbers of department"+this.NoOfDept);
		System.out.println("The numbers of vehicalCount is"+this.NoOfVehiCount);
		System.out.println("---------------------------");
	}
	
}//defence ends here

class Army extends Defence
{
	int NoOfTanks;
	int NoOfGuns;
	int NoOfGrenites;
	int NoOfButallian;
	
	Army()
	{
		NoOfTanks = 432;
		NoOfGuns = 8765;
		NoOfGrenites = 2000000000;
		NoOfButallian = 876545676;
	}
		
	public Army(int noOfTanks, int noOfGuns, int noOfGrenites, int noOfButallian) {
		super();
		NoOfTanks = noOfTanks;
		NoOfGuns = noOfGuns;
		NoOfGrenites = noOfGrenites;
		NoOfButallian = noOfButallian;
	}
	
	public int getNoOfTanks() {
		return NoOfTanks;
	}

	public void setNoOfTanks(int noOfTanks) {
		NoOfTanks = noOfTanks;
	}

	public int getNoOfGuns() {
		return NoOfGuns;
	}

	public void setNoOfGuns(int noOfGuns) {
		NoOfGuns = noOfGuns;
	}

	public int getNoOfGrenites() {
		return NoOfGrenites;
	}

	public void setNoOfGrenites(int noOfGrenites) {
		NoOfGrenites = noOfGrenites;
	}

	public int getNoOfButallian() {
		return NoOfButallian;
	}

	public void setNoOfButallian(int noOfButallian) {
		NoOfButallian = noOfButallian;
	}

	void display()
	{
		System.out.println("The numbers of Tanks is :"+this.NoOfTanks);
		System.out.println("The numbers of Guns is"+this.NoOfGuns );
		System.out.println("The numbers of Grenites is"+this.NoOfGrenites);
		System.out.println("The numbers of Butallian is"+this.NoOfButallian);
		System.out.println("---------------------------");
		
	}
	
	
}//Army ends here

class Navy extends Defence
{
	int NoOfShips;
	int NoOfSubmeriens;
	int NoOfTorpedoes;
	
	Navy()
	{
		NoOfShips = 87678;
		NoOfSubmeriens = 3459;
		NoOfTorpedoes = 3234;
	}

	public Navy(int noOfShips, int noOfSubmeriens, int noOfTorpedoes) {
		super();
		NoOfShips = noOfShips;
		NoOfSubmeriens = noOfSubmeriens;
		NoOfTorpedoes = noOfTorpedoes;
	}

	public int getNoOfShips() {
		return NoOfShips;
	}

	public void setNoOfShips(int noOfShips) {
		NoOfShips = noOfShips;
	}

	public int getNoOfSubmeriens() {
		return NoOfSubmeriens;
	}

	public void setNoOfSubmeriens(int noOfSubmeriens) {
		NoOfSubmeriens = noOfSubmeriens;
	}

	public int getNoOfTorpedoes() {
		return NoOfTorpedoes;
	}

	public void setNoOfTorpedoes(int noOfTorpedoes) {
		NoOfTorpedoes = noOfTorpedoes;
	}
	
	void display()
	{
		System.out.println("The number of ships"+this.NoOfShips);
		System.out.println("The number of Submeriens is "+this.NoOfSubmeriens );
		System.out.println("The number of Torpedoes is :"+this.NoOfTorpedoes);
		System.out.println("---------------------------");
		
	}
	
}//Navy ends here

class Airforce extends Defence
{
	int NoOfMission;
	int	AirCraft;
	int NoOfSquadron;
	
	Airforce()
	{
		NoOfMission = 8765;
		AirCraft = 234;
		NoOfSquadron = 32343;
		
	}

	public int getNoOfMission() {
		return NoOfMission;
	}

	public void setNoOfMission(int noOfMission) {
		NoOfMission = noOfMission;
	}

	public int getAirCraft() {
		return AirCraft;
	}

	public void setAirCraft(int airCraft) {
		AirCraft = airCraft;
	}

	public int getNoOfSquadron() {
		return NoOfSquadron;
	}

	public void setNoOfSquadron(int noOfSquadron) {
		NoOfSquadron = noOfSquadron;
	}

	public Airforce(int noOfMission, int airCraft, int noOfSquadron) {
		super();
		NoOfMission = noOfMission;
		AirCraft = airCraft;
		NoOfSquadron = noOfSquadron;
	}
	
	void display()
	{
		System.out.println(this.NoOfMission);
		System.out.println(this.AirCraft );
		System.out.println(this.NoOfSquadron);
		
	}
	
}//Airforce ends here

class RegisterDefence
{
	public static void main(String args[])
	{
		Defence D1=new Defence();
		D1.display();
		
		Army A1=new Army(43,543,765,43);
		A1.display();
	}
}
