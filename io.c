#include <cs50.h>
#include <stdio.h>
#include <string.h>

 int main(void){
   
   string s = get_string("Input: ");
   printf("output :");
   
   for (i = 0, n = strlen(s); i < n; i++)
   {
     printf("%c" , s[i]);
   }
   printf("\n");
 }
