#include <cs50.h>
#include <stdio.h>

void darw(int n);

int main (void) {
int height = get_int("Bauhöhe:");
draw(height);
}
void darw(int n){
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < i + 1; j++){
      printf("#");
      }
      printf("\n");
   }
}   






void darw(int n);

int main (void) {
int height = get_int("Bauhöhe:");
draw(height);
  
void darw(int n)
{
  if (n <= 0){
  return;
  }
  draw(n-1);
  for(int i = 0; i < n; i++){
    printf("#");
    
  
  
