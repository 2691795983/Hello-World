#include <stdio.h>
void  main()
{
int a,i,t;
printf("input a number:\n");
scanf("%d",&a);
for(i=2;i<a;i++)
{
  if(a%i==0)
  {
	  printf("this is not a sushu.\n");
	  break;
  }
  
}
if(a==i)
{
printf("this is a sushu.\n");
}
}
