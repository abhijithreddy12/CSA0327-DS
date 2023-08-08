// Write a C-program for perform matrix multiplication

#include <stdio.h>
#include<stdlib.h>  
int main(){
  
  int a[10][10],b[10][10],c,i,j,mul[10][10],n,m,k;
  printf("Enter the number of rows : ");
  scanf("%d",&n);
  printf("Enter the number of columns: ");
  scanf("%d",&m);
  
  printf("Enter the 1st matrix numbers : ");
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		scanf("%d",&a[i][j]);
	  }	
  }
  printf("Enter the 2nd matrix numbers : ");
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		scanf("%d",&b[i][j]);
	  }
  }
  //multiply
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		mul[i][j]=0;
  		for(k=0;k<m;k++){
  			mul[i][j]+=a[i][k]*b[i][k];	
		  }
	  }
  }
  
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		printf("%d\t",mul[i][j]);
	  }
	  printf("\n");
  }
  
  return 0;
}
