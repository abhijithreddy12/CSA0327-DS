#include<stdio.h>
int main(){
	int n[10],i,num;
	printf("enter the numbers you going to enter : ");  
	scanf("%d",&num); 
	for(i=0;i<num;i++){
		printf("enter the %d number: ",i);
		scanf("%d",&n[i]);
	}   
	for(i=0;i<num;i++){
		if(n[i]%2==0){ 
		printf("the number %d is even",n[i]); 
		}
		else{
			printf("the number %d is odd",n[i]); 
		}
		printf("\n");
	}  
	return 0;
}
