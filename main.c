#include <stdio.h>
#include <stdlib.h>

void Print_Num_ByValue(int Number)
{
    Number = 5 ; //This Value Is Strong Than Declare In Main
    printf("Number From Void Function (By Value) =%d",Number);
}

void Print_Num_ByReferenc(int* Number)
{
    *Number = 1;
    printf("Number =%d",*Number);
}
int main()
{
    int SecNum = 3;
    /*Print_Num_ByValue(SecNum);
    printf("\nNumber From Main Function (By Value)=%d\n", SecNum);

    printf("=====================\n");*/
    printf("SecNum Before = %d\n" ,SecNum);
    Print_Num_ByReferenc(&SecNum);
    printf("\nSecNum After = %d" ,SecNum);
    return 0;
}
