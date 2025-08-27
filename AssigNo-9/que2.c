//2. Search the given number in array. 

#include <stdio.h>
void storearray(int* ,int );
void searcharr();
int* positionarr(int* ,int );
int main() {
    int arr[50], n;
	printf("Enter size of array: ");
    scanf("%d", &n);

	storearray(arr,n);
	searcharr();
    
	int i=positionarr(arr,n);
      printf("Number found at position %d\n", i+1);

}
void storearray(int* arr,int n)
{
	printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }	
}
void searcharr()
{
	int key;
	printf("Enter number to search: ");
    scanf("%d", &key);
}
int* positionarr(int* arr,int n)
{
	int key;
	for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
          
            return 0;   
        }
    }
	return -1;
}