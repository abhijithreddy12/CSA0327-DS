// Factorial of a given number without recrusion

#include <stdio.h>
int main(){
	int n,fact,i;
	printf("Enter the number to find factorial : ");
	scanf("%d",&n);
	fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("The fact value is:  %d",fact);
	return 0;
}
