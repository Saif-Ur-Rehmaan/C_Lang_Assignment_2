/**Q. 3. Write a program that reads three user inputted numbers and prints the largest number. */
#include <stdio.h>

int main()
{
    printf("\nQ.3. Write a program that reads three user inputted numbers and prints the largest number.  \n");
    printf("\n* Enter 0 to Exit and  \n");
    printf("\n* Any other numbers to continue game..  \n");
    int lastMax=0;
  while(1){
      int input;
      if(input==0){
          break;
      }
    printf("Enter: ");
    scanf("%d",&input);

    lastMax=lastMax<input?input:lastMax;
    printf("\n");
      
  }
    printf("Max is %d",lastMax);
    return 0;
}


