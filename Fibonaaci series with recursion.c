// Fibonaaci series using recrusion

#include<stdio.h>
int main(){
	int i,n,num;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf(" %d ",rec(i));
	}
	
	return 0;
}
int rec(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return (rec(n-1)+rec(n-2));
		
	}
}
