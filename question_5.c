/**
 * Q.5. Write a program to demonstrate the use of pointers by doing the following:
 *
 * Declare an integer variable and initialize it.
 * Create a pointer variable and store the address of the integer variable.
 * Print the value of the integer using the pointer and its address.
*/
#include <stdio.h>

int main()
{ 
    int iAmInt=10;
    int *pOfint=&iAmInt;
    printf("value of int is %d",*pOfint);
    return 0;
}
