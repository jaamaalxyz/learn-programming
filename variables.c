#include <stdio.h>

int main() {

  // what is variable?
  // variable is a container or box which contain a piece of information 
  // and that can be update, modify or retrieve when needed except some cases
 
  // varibale syntax in C
  // datatype variable_name;
    
  // int num1; // variable can be declare without initialization
  // num1 = 5; // and initialize the value later
  // printf("Value of num1: %d\n", num1);

  // int num2 = 10; // can be with initialization
  // printf("Value of num2: %d\n", num2);

  // main data types in C are: char, int, float and double 

  // char a = 'a';
  // printf("Value of a: %c\n", a);

  // int num = 1;
  // printf("Value of num: %d\n", num);

  // float PI = 3.14;
  // printf("Value of PI: %f\n", PI);

  // double 
  // printf("");

  // Varialbe naming rules:

  // 1. name can be composed with uppercase, lowercase, numbers and underscores

  // valid example: 
  // int _thisIsNum5 = 5;
  // printf("%d\n", _thisIsNum5);

  // 2. the first character must be a letter or underscore
  
  // valid example: 
  // int MyNum = 10;
  // printf("%d\n", MyNum);
  // int myNum = 11;
  // printf("%d\n", myNum);
  // int _myNum = 12;
  // printf("%d\n", _myNum);
  
  // invalid example: 
  // int 9isNine = 9; // error occured
  // float #PI = 3.14159; // error occured

  // 3. only keywords are not allowed as a variable name
  
  // valid example:
  // int int_count = 13;
  // printf("%d\n", int_count); // it works

  // invalid example:
  // int float = 10; // error occured

  // 4. variable name can not hold any blank spaces

  // valid example:
  // camelCase
  int numNine = 9;
  printf("Value of numNine: %d\n", numNine);
  // snake_case
  int num_nine = 9;
  printf("Value of num_nine: %d\n", num_nine);
  // PascalCase
  int NumNine = 9;
  printf("Value of NumNine: %d\n", NumNine);
  // UPPERCASE
  const int NINE = 9;
  printf("Value of NINE: %d\n", NINE);



  
  return 0;
}