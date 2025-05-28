/**
 * Q.4. Write a program which takes 5 marks and calculate their percentage and also
 * display their grades.
*/
#include <stdio.h>

int main()
{
      int total_marks=0;
    int total_obtain_marks=0;
    int i=0;
    
    while(i<5){
        int T,OM;
        printf("\n*****************************Subject %d****************************",i+1);
        printf("\nPlease Enter Total: ");
        scanf("%d",&T);
        printf("\nPlease Enter Obtain Marks: ");
        scanf("%d",&OM);
        total_marks+=T;
        total_obtain_marks+=OM;
        i++;
    } 
    float percent=((float)total_obtain_marks/(float)total_marks)*100;
    char grade[3]; 
    if (percent >= 90) {
        grade[0] = 'A'; grade[1] = '+'; grade[2] = '\0';
    } else if (percent >= 80) {
        grade[0] = 'A'; grade[1] = '\0';
    } else if (percent >= 70) {
        grade[0] = 'B'; grade[1] = '\0';
    } else if (percent >= 60) {
        grade[0] = 'C'; grade[1] = '\0';
    } else if (percent >= 50) {
        grade[0] = 'D'; grade[1] = '\0';
    } else {
        grade[0] = 'F'; grade[1] = '\0';
    }
    printf(
        "Total: %d\nObtained: %d\nPercentage: %.2f percentage\nGrade: %s",
        total_marks,
        total_obtain_marks,
        percent
        ,grade
    );

    return 0;
}
