
/**Q 1.  Write down a C program to show a simple calculator using functions.	  */
#include <stdio.h>
int addition(int elems[],int arraySize){
    int total=0;
    for(int i=0;i<arraySize;i++){
        total += elems[i];
    }
    return total;
}
int subtraction(int elems[],int arraySize){
    int total=0;
    for(int i=0;i<arraySize;i++){
        total -= elems[i];
    }
    return total;
}
int multiplication(int elems[],int arraySize){
    int total=1;
    for(int i=0;i<arraySize;i++){
        total *= elems[i];
    }
    return total;
}
float division(int fst,int snd){
    float total=fst/snd;
    return total;
}

// i've initially done function overloading later i  find out its not supported in C :)
// void printLine(){
//     printf("/********************************************************************/");
// }
// void printLine(char heading[]){
//     printf("/***************************** %s *************************************/",heading);
// }

void printLine(const char *heading) {
    if (heading == NULL) {
        printf("/********************************************************************/\n");
    } else {
        printf("/***************************** %s *************************************/\n", heading);
    }
}
void print_options(){
    int numberOfOptions=5;
    char opttions[5][20]={
        "1 -> Addition",
        "2 -> subtraction",
        "3 -> multiplication",
        "4 -> division",
        "0 -> Exit",
    };
    for(int i = 0; i<numberOfOptions; i++){
        printf("%s",opttions[i]);
        printf("\n");
    }
}

int input_int(char message[]){
    int variable;
    printf("%s ",message);
    scanf("%d",&variable);
    return variable;
}
float performAction(int actionId){
    int inputs[1000];
    int sizeOfArr=0;
    float total;
    switch(actionId){
        case 1:
            while(1){
                int e=input_int("Enter 0 to Exit OR Number  to add that also : ");                
                if(e == 0){
                    break;
                }
                inputs[sizeOfArr]=e;
                sizeOfArr++;
            }
            total = (float)addition(inputs,sizeOfArr);
            return total;
            break;
        case 2:
            while(1){
                int e=input_int("Enter 0 to Exit OR Number  to subtract that also : ");                
                if(e == 0){
                    break;
                }
                inputs[sizeOfArr]=e;
                sizeOfArr++;
            }
             total = (float)subtraction(inputs,sizeOfArr);
            return total;
            break;
        case 3:
            while(1){
                int e=input_int("Enter 0 to Exit OR Number  to multiply that also : ");
                if(e == 0){
                    break;
                }
                inputs[sizeOfArr]=e;
                sizeOfArr++;
            }
             total = (float)multiplication(inputs,sizeOfArr);
            return total;
            break;
        case 4:
            int fst=input_int("Enter first Number: ");
            int snd=input_int("Enter second Number Except 0 : ");
             total =(float) division(fst,snd);
            return total;
        default: 
            printf("Entered Wrong Number...");
            return 0;
    }
}
int main()
{
     while(1){
        printLine(NULL);
        printLine("Please! Select any one of the Given Options..");
        print_options();
        
        int selectedOpt=input_int("Enter Selected Number : ");
        float output=performAction(selectedOpt);
        printLine(NULL);
        printf("Calculated Output is: %.2f\n",output);
        input_int("Enter  any number to comtinue again...");
        printLine(NULL);
        printLine(NULL);
    }

    return 0;
}


