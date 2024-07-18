/*    int age = 25;
    printf("age address: %p\n", &age);
    printf("age value: %d \n", age);
    //printf("%p", *age);
    
    int* ptr = &age;   //& gives the memory address
                       //create a pointer and assign the age memory address to it.
    
    printf("ptr address: %p\n", ptr);
    printf("ptr value: %d\n", *ptr);
    
    *ptr = 31;  //change value in the memory address previously assigned to the pointer
    
    printf("age value: %d\n", age);

    
    // enter a double value, copy the variable address to a pointer
    double salary;
    
    printf("enter a decimal number: ");
    scanf("%lf", &salary);
    printf("salary is: %lf \n", salary);
    
    double* ptr = &salary;
    
    printf("salary value is: %lf \n", *ptr); //print salary value using ptr
    
    *ptr = 2 * salary;  //increase salary value by 2 times using ptr
    
    printf("new salary value is: %lf \n", *ptr);
    printf("new salary is: %lf \n", salary);


    //change values from an array using pointers
    int numbers[] = {1,3,5,7,9};
        
    for (int i=0; i<5; i++)
    {
        printf(" value %d, value using ptrs %d = address %p \n", numbers[i], *(numbers + i), numbers + i);
    }
    
    *numbers = 2;
    *(numbers + 4) = 11;
    
    for (int i=0; i<5; i++){
        printf("%d\n", numbers[i]);
    }

 * 
 * //look for the largest number in an array
 *     int arr[] = {34,12,21,54,48};
    
    int largest = *arr;
    
    printf("%d\n", largest);
    
    for (int i=0; i<5; i++){
        if(largest < *(arr+i)){
            largest = *(arr+i);
        }
    }

    printf("%d\n", largest);

 
  * //find a value

void findvalue(int* num){
    *num = 39;
}

int main()
{
    int number = 21;
    
    findvalue(&number); //number's address is passed to the function, since the function
                        //has a pointer, number receives that new address and also its value.
    
    printf("NUmber %d", number);



  * //find the square of a value
  
void findsquare(int* num){
    int square = *num * *num;
    *num = square;
}

int main()
{
    int number = 21;
    
    findsquare(&number); //
    
    printf("Square %d", number);


 * 
 * 
 * // function that return a pointer
 * 
 * int* findsquare(int* num){
    int square = *num * *num;
    *num = square;
    return num;
}

int main()
{
    int number = 21;
    
    int* ptr = findsquare(&number); //
    
    printf("Square %d", *ptr);
    
	return 0;
}

 ( ͡° ͜ʖ ͡°)

 
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
 * 
 * 
 * */