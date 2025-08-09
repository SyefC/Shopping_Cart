#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

//challenging only using scanf() no fgets()! so challenge is get the '\n' in the input buffer.

char cart[50][25] = {""};
int index_of_rows = -1;
int true = 1;
float price = 0;
int pieces = 0;
float Total = 0.0f;

int main(){
system("cls");
while(true == 1){
index_of_rows++;
printf("What Item Would You Pick? ");
scanf("%s", cart[index_of_rows]);
getchar();
printf("How much $ is a piece of %s? ", cart[index_of_rows]);
scanf("%f", &price);
getchar();
printf("How Many Are You Buying %s: ", cart[index_of_rows]);
scanf("%d", &pieces);
getchar();
Total = price * pieces;
printf("Total of your cart: $%.3f",Total);
Sleep(2555);
return 0;
}
}