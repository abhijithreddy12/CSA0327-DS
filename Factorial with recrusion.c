// factorial of given number with recrusion

#include<stdio.h>
int main(){
	int n,f;
	printf("Enter the number of factorial : ");
	scanf("%d",&n);
	f += fact(n);
	printf(" the fact value is : %d ",f);
	return 0;
}

int fact(int n){
	if(n<=1){
		return n;
	}
	else{
		return n*fact(n-1);
	}
}
