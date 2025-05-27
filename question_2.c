
#include <stdio.h>
/**Q. 2 Write a C program to find the minimum and the maximum value in an array.  */
int main()
{
    int arr[10]={1,5,20,30,8,10,70,30,101,5};
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<10;i++){
        max= arr[i]>max?arr[i]:max;
        min= arr[i]<min?arr[i]:min;
    }
    printf("Max is: %d\nMin is %d",max,min);

    return 0;
}


