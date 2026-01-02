#include<stdio.h>
void main(){
	int arr[]={10,20,30,40,50,60};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n;i+1){
		int temp=arr[i];
		arr[i]=arr[i+2];
		arr[i+2]=temp;
		
		
	}
	for(int i=0;i<n;i++){
		
	
	printf("%d",arr[i]);}
}