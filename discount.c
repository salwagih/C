#include <stdio.h>

float discount(float price , int percentage);

int main (void)

{

   float regular = printf("regular price: ");
   scanf("%f" , &regular);
   int percent_off = printf("percent off: ");
   scanf("%i" , &percent_off);
   float sale = discount(regular , percent_off);
   printf("after discount: \n %f $ " , sale);

}
float discount (float price , int percentage) {
    return price * (100 - percentage) / 100;
}
