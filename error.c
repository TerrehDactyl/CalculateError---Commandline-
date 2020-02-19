#include <stdio.h>
#include <math.h>

//compile with gcc -lm error.c -o error

int main()
{
int range=0;
printf("how many calculation will you be making?\n");	
scanf("%d", &range);
float approx[range], exact[range], error; 

for(int i=0; i<range; i++)
{
printf("enter approx %d\n", i+1);	
scanf("%f", &approx[i]);
printf("enter exact %d\n", i+1);	
scanf("%f", &exact[i]);
error = fabs(approx[i] - exact[i])/exact[i]*100;
printf("Percent error for problem %d is %f\n", i+1, error);
error=0;
}
}
