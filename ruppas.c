#include <stdio.h>
int main(){
  int X=0;
while (( X < 10 ) || (X > 20)) {
  printf("\nEnter a number :");
  scanf("%d", &X);
if( X < 10){
  printf("Too low \ntry again");
}
else if ( X > 20 ){
  printf ("Too high \ntry again");}
else {printf(" Thank you ");}

}
    return 0;
}