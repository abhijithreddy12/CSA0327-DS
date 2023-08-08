// implement array operation with insert and delete

#include <stdio.h>

int main(){
	int a[10],n,i,operation,b,c;
	//insert the size of the array
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	//insert the values
	printf("Enter the %d numbers in array : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//display the array
	printf("The array list is : ");
	printf("[ ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("] \n");
	
	printf("Enter the operation....\n");
	printf("press 1 for insert element and press 2 for delete the element : ");
	scanf("%d",&operation);
	switch(operation){
		case 1:{
			n++;
			printf("Enter the element you insert : ");
			scanf("%d",&a[n-1]);
			for(i=0;i<n;i++){
				printf("%d ",a[i]);
			}
			
			break;
		}
		case 2:{
			printf("Enter the position want to delete : ");
			scanf("%d",&b);
			if(b>=n+1){
				printf("sorry you cant delete the position its empty......");
			}
			else{
				b--;
				a[b]=a[b+1];
				n--;
				for(i=0;i<n;i++){
					printf("%d",a[i]);
				}	
			}
			break;
		}
		default:{
			printf("sorry wrong input");
			break;
		}
	}
	
	return 0;
}
