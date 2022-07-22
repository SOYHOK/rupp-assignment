#include <stdio.h>
int main(){
    int computer_num, counter=0 ;
    while(computer_num != 50){
         printf("\nguess a number:");
    scanf("%d", &computer_num);
        if ( computer_num < 50){
            printf(" Too low"); }
        else if (computer_num > 50)
        { printf( " Too high");}
        else {printf("Well done \nThere are %d attempts", counter); }
    counter++;  
    } 

    return 0;
}