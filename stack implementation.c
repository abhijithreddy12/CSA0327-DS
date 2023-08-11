//implement stack using c program

#include <stdio.h>
#include <stdlib.h>
#define n 4
void push();
void pop();
void show();
int tos=-1,stack[n];
int main(){
	
	int choice;
	
	
	while(1){
		
	printf("enter your choice...\n");
	printf("for push press 1 \n for pop press 2 \n for display press 3 \n for exit press 4 \n");
	printf("Enter the choice : ");
	scanf("%d",&choice);
	
	
		switch(choice){
			case 1:{
				push();
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				show();
				break;
			}
			case 4:
				printf("Thank you.... Bye");
				exit(0);
				
			default:{
				printf("Sorry Wrong input ");
				break;
			}
		}
	}
	return 0;
}	
	
	
	
void push(){
	int x;
	if(tos==n-1){
		printf("Sorry overflow stack....!!! \n");
	}
	else{
		printf("Enter the number to push into stack : ");
		scanf("%d ",&x);
		printf("number = %d ",x);
		tos+=1;
		printf(" tos = %d",tos);
		stack[tos]=x;
		
		printf("push complete");
	}
}
void pop(){
	if(tos==-1){
		printf("Sorry no data  in stack....");
	}
	else{
		tos=tos-1;
		printf("Pop complete");
	}
}
void show(){
	int i;
	if(tos==-1){
		printf(" Sorry,There is no data in stack. so, we can't show '\n");
	}
	else{
		for(i=0;i<n;i++){
		printf("%d ",stack[i]);
		}
		printf("\n");
	}
	
}

