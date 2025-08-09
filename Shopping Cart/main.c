//Project: Shopping Cart.

/*
Developer: SyefC/BoomPlay
challenging only using scanf() no fgets()! so challenge is get the '\n' in the input buffer.
The Currency is in dollar! cents, ones, tens, hundreds, etc
Example: 9.99 This Is Correct!
Example: 9.994 This is Incorrect!
---------------------------------------------------------------------------------------------------------------------------------------------------
Note: This is a test of removing a whitespace character and teaching beginners how to remove it in C so this project is only having Fun and it it so SIMPLE to make this program!,
And by the way i am gonna have a big, Big , BIG Project i will spoil a bit.
Upcoming project: Tokener in C PURE (Testing For Making a new Programming Language!), Games (Mainly made in Pygame i want to use SDL in C++ But idk how to set it up plus theres a limited tutorial out there!),
Snake Game in Pygame (Probably gonna be the easiest game ive made in pygame later), And Last is... Eval() in C PURE (Im Making this for C Developers so they dont waste time making theyre own eval()!)
Mainly Focus Project: Tokener in C PURE, Eval() in C PURE.
Thanks For Seeing this source code on GitHub :).
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

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
printf("Total of your cart: $%.2f",Total);
Sleep(2555);
return 0;
}
}