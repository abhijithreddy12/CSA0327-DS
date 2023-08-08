//search using the binary search method

#include <stdio.h>
int main(){
	int n,a[50],i=0,j,b,mid,c,low,high,Lcount=0,Hcount=0;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the %d index number : ",i);
		scanf("%d",&a[i]);
	}
	printf("Your array list is : ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
	printf("Your sort array list is :");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	low=0;
	high=n-1;
	mid = (low+high)/2;
	printf("\n");
	printf("%d",mid);
	printf("\n");
	printf("Enter the number to search : ");
	scanf("%d",&c);
	while(low<=high){
		if(a[mid]==c){
			printf("the given value is found in %d index ",mid);
			break;
		}
		else if(a[mid]<c){
			low = mid+1;	
		}
		else{
			high = mid-1;
		}
		mid = (low+high-1)/2;
		printf("\n");
		printf(" value of mid: %d",mid);
	}
	if(low>high){
		printf("the value not found in the array......");
	}
	
	return 0;
}
