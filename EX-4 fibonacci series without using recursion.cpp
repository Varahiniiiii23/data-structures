#include<stdio.h>
int main()
{
	int num1=0,num2=1,num3,i,num;
	printf("print the number of elemets: ");
	scanf("%d",&num);
	
	printf("\n%d %d",num1,num2);
     for(i=2; i < num; ++i)
 {    
  num3=num1+num2;    
  printf(" %d",num3);    
  num1=num2;    
  num2=num3;    
 }  
 
  return 0;  
 }
