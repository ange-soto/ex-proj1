#include <stdio.h>


int* multiply_numbers(int* num1, int* num2, int* mult){ //third pointer need to be initialized in the argument, 
                                                        //if it is declared inside the function it doesn't work
    
    *mult = *num1 * *num2;
    return mult;
}

int main()
{
    int number1 = 13;
    int number2 = 9;
    int mult;
    
    int* res = multiply_numbers(&number1, &number2, &mult);

    printf("result %d", *res);

    return 0;
}
