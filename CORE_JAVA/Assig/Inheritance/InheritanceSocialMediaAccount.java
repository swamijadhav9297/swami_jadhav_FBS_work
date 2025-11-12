

class SocialMediaAccount {
String UserName;
String Email;
boolean IsPublic;
boolean IsVerified;
int Comments;
int NoOfPost;
int Like;

SocialMediaAccount()
{
	UserName ="sam jadhav";
	Email = "swamijadhav@123gmail.com";
	IsPublic =true;
	IsVerified = true;
	Comments = 4567;
	NoOfPost = 432;
	Like = 654;
}

public SocialMediaAccount(String userName, String email, boolean isPublic, boolean isVerified, int comments,
		int noOfPost, int like) {
	super();
	this.UserName = userName;
	this.Email = email;
	this.IsPublic = isPublic;
	this.IsVerified = isVerified;
	this.Comments = comments;
	this.NoOfPost = noOfPost;
	this.Like = like;
}

public String getUserName() {
	return UserName;
}

public void setUserName(String userName) {
	UserName = userName;
}

public String getEmail() {
	return Email;
}

public void setEmail(String email) {
	Email = email;
}

public boolean isIsPublic() {
	return IsPublic;
}

public void setIsPublic(boolean isPublic) {
	IsPublic = isPublic;
}

public boolean isIsVerified() {
	return IsVerified;
}

public void setIsVerified(boolean isVerified) {
	IsVerified = isVerified;
}

public int getComments() {
	return Comments;
}

public void setComments(int comments) {
	Comments = comments;
}

public int getNoOfPost() {
	return NoOfPost;
}

public void setNoOfPost(int noOfPost) {
	NoOfPost = noOfPost;
}

public int getLike() {
	return Like;
}

public void setLike(int like) {
	Like = like;
}

void display()
{
	System.out.println("This is UserName : "+this.UserName);
	System.out.println("This is Email : "+this.Email);
	System.out.println("This is IsPublic : "+this.IsPublic);
	System.out.println("This is IsVerified : "+this.IsVerified);
	System.out.println("This is Comments : "+this.Comments);
	System.out.println("This is NoOfPost : "+this.NoOfPost);
	System.out.println("This is Like : "+this.Like);
	System.out.println("------------------------");
}

}

class Instagram extends	SocialMediaAccount
{
	int NoOfFollowers;
	int NoOfFollowings;
	int NoOfPostArchived;
	int NoOfStoryArchived;
	int NoOfAudioSaved;

	Instagram()
	{
		NoOfFollowers = 456;
		NoOfFollowings = 43;
		NoOfPostArchived = 343;
		NoOfStoryArchived = 876;
		NoOfAudioSaved = 65466;
		
	}

	public Instagram(int noOfFollowers, int noOfFollowings, int noOfPostArchived, int noOfStoryArchived,
			int noOfAudioSaved) {
		super();
		this.NoOfFollowers = noOfFollowers;
		this.NoOfFollowings = noOfFollowings;
		this.NoOfPostArchived = noOfPostArchived;
		this.NoOfStoryArchived = noOfStoryArchived;
		this.NoOfAudioSaved = noOfAudioSaved;
	}

	public int getNoOfFollowers() {
		return NoOfFollowers;
	}

	public void setNoOfFollowers(int noOfFollowers) {
		NoOfFollowers = noOfFollowers;
	}

	public int getNoOfFollowings() {
		return NoOfFollowings;
	}

	public void setNoOfFollowings(int noOfFollowings) {
		NoOfFollowings = noOfFollowings;
	}

	public int getNoOfPostArchived() {
		return NoOfPostArchived;
	}

	public void setNoOfPostArchived(int noOfPostArchived) {
		NoOfPostArchived = noOfPostArchived;
	}

	public int getNoOfStoryArchived() {
		return NoOfStoryArchived;
	}

	public void setNoOfStoryArchived(int noOfStoryArchived) {
		NoOfStoryArchived = noOfStoryArchived;
	}

	public int getNoOfAudioSaved() {
		return NoOfAudioSaved;
	}

	public void setNoOfAudioSaved(int noOfAudioSaved) {
		NoOfAudioSaved = noOfAudioSaved;
	}
	
	void display()
	{
		System.out.println("This is NoOfFollowers : "+this.NoOfFollowers);
		System.out.println("This is NoOfFollowings : "+this.NoOfFollowings);
		System.out.println("This is NoOfPostArchived : "+this.NoOfPostArchived);
		System.out.println("This is NoOfStoryArchived : "+this.NoOfStoryArchived);
		System.out.println("This is NoOfAudioSaved : "+this.NoOfAudioSaved);
		System.out.println("------------------------");
	}
	


}
	

class LinkDin extends	SocialMediaAccount
{
	int NoOfConnection;
	int NoOfProfileViewd;
	int NoOfJobsSupplied;
	
	LinkDin()
	{
		NoOfConnection = 543;
		NoOfProfileViewd = 9876;
		NoOfJobsSupplied = 323;
	}

	public LinkDin(int noOfConnection, int noOfProfileViewd, int noOfJobsSupplied) {
		super();
		this.NoOfConnection = noOfConnection;
		this.NoOfProfileViewd = noOfProfileViewd;
		this.NoOfJobsSupplied = noOfJobsSupplied;
	}

	public int getNoOfConnection() {
		return NoOfConnection;
	}

	public void setNoOfConnection(int noOfConnection) {
		NoOfConnection = noOfConnection;
	}

	public int getNoOfProfileViewd() {
		return NoOfProfileViewd;
	}

	public void setNoOfProfileViewd(int noOfProfileViewd) {
		NoOfProfileViewd = noOfProfileViewd;
	}

	public int getNoOfJobsSupplied() {
		return NoOfJobsSupplied;
	}

	public void setNoOfJobsSupplied(int noOfJobsSupplied) {
		NoOfJobsSupplied = noOfJobsSupplied;
	}
	
	void display()
	{
		System.out.println("This is NoOfConnection : "+this.NoOfConnection);
		System.out.println("This is NoOfProfileViewd : "+this.NoOfProfileViewd);
		System.out.println("This is NoOfJobsSupplied : "+this.NoOfJobsSupplied);
		System.out.println("------------------------");
	}
}

class Youtube extends	SocialMediaAccount
{
	int NoOfSubscriber;
	
	Youtube()
	{
		NoOfSubscriber = 5645;
	}

	public Youtube(int noOfSubscriber) {
		super();
		this.NoOfSubscriber = noOfSubscriber;
	}

	public int getNoOfSubscriber() {
		return NoOfSubscriber;
	}

	public void setNoOfSubscriber(int noOfSubscriber) {
		NoOfSubscriber = noOfSubscriber;
	}
	
	void display()
	{
		System.out.println("This is NoOfSubscriber : "+this.NoOfSubscriber);
		System.out.println("------------------------");
	}
	
}

class InheritanceSocialMediaAccount
{
	public static void main(String args[])
	{
		SocialMediaAccount SM1=new SocialMediaAccount();
		SM1.display();
 		
		Instagram I1=new Instagram();
		I1.display();
 		
 		LinkDin LD1=new LinkDin();
 		LD1.display();
 		
 		Youtube Y1=new Youtube();
 		Y1.display();
	}
}