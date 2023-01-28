#include <stdio.h>
#include <string.h>
int main ()
{
char response [3];
float wholesale_cost,retail_price,profit_margin;
printf("Enter the wholesale price and profit margin :");
scanf("%f",&wholesale_cost);
scanf("%f",&profit_margin);


retail_price = wholesale_cost * profit_margin ;

printf("the retail_price %f  \n",retail_price);

printf("Do you want to continue with the calculation of the retail prices \n");
  scanf ("%s",response);
while (response=="YES" );
if(response=="YES"){

     printf("Enter the wholesale price and profit margin :");
     scanf("%f",&wholesale_cost);
     scanf("%f",&profit_margin);
     retail_price = wholesale_cost * profit_margin ;
     printf("the retail_price %f  \n",retail_price);

}
else {
printf("end\n");
}
}










