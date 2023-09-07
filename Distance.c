#include <stdio.h>

struct Distance {
   float meter;
   float kilometer;
} d1,d2,result;



int main() {
   
   int n;
   printf("Enter 1st distance\n");
   printf("Enter meter: ");
   scanf("%f", &d1.meter);
   printf("Enter kilometer: ");
   scanf("%f", &d1.kilometer);
 
   
   printf("\nEnter 2nd distance\n");
   printf("Enter meter: ");
   scanf("%f", &d2.meter);
   printf("Enter kilometer: ");
   scanf("%f", &d2.kilometer);
   
   printf("Enter your choice to display the result:\n");
   printf("1.In meter\n2.In kilometer\n");
   scanf("%d",&n);
   
   switch(choice)
         case 1:
              result.meter=d1.meter+d2.meter;
         case 2: 
              result.kilometer=d1.kilometer+d2.kilometer;
   
   
   printf("The sum of two distances in meter is:%f\n",result.meter);
   printf("The sum of two distances in kilometer is:%f\n",result.kilometer);
   
   while(result.meter>=1)
   {
    result.meter=result.meter/1000;
   }
   
   while(result.kilometer>=1)
   {
    result.kilometer=result.kilometer*1000;
   }
   
   printf("Result of meter converted to kilometer is:%f\n",result.meter);
   printf("Result of kilometer converted to meter is:%f\n",result.kilometer);
   
   
   return 0;
}
