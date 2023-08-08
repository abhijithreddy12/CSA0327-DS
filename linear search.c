//search number using linear search

#include <stdio.h>
int main(){
	int array[50],n,i,b,count=0;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the value :  ");
		scanf("%d",&array[i]);
	}
	printf("The array elements are: \n");
	for(i=0;i<n;i++){
		printf( " %d ",array[i]);
	}
	
	printf("Enter the number to search : ");
	scanf("%d",&b);
	for(i=0;i<n;i++){
		if(array[i]==b){
			printf("The number is found in the index %d \n",i);
			count++;
		}
	}
	if(count==0){
		printf("The number is not found....");
	}
	return 0;
}
