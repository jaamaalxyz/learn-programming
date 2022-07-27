#include <stdio.h>
#include <limits.h>
#include <float.h>


int main() {
  // C programming basic data types: char, int, float, double

  // char for individual character
  // char firstLetterOfAlphabet = 'a';
  // printf("%c\n", firstLetterOfAlphabet); // output: a

  // char data type consume 1 byte memory space and the value range from -128 to 127
  // printf("CHAR BIT SIZE: %d\n", CHAR_BIT);        // 8
  // printf("CHAR MIN VALUE RANGE: %d\n", CHAR_MIN); // -128
  // printf("CHAR MAX VALUE RANGE: %d\n", CHAR_MAX); // 127

  // int for integer type data
  // int number = 32;
  // printf("Number: %d\n", number); // Number: 32

  // int data type consume 2 or 4 byte of memory space 
  // the value range from -2147483648 to 2147483647
  // int INT_BYTE = sizeof(int);
  // printf("INT BYTE SIZE: %d\n", INT_BYTE); // INT BYTE SIZE: 4
  // printf("INT MIN VALUE SIZE: %d\n", INT_MIN); // -2147483648
  // printf("INT MAX VALUE SIZE: %d\n", INT_MAX); // 2147483647

  // float data type for real value within 6 digit precision value
  // float realNumber = 3.2131;
  // printf("Real Number: %f\n", realNumber); // Real Number: 3.213100

  // float data type consume 4 byte of memory space
  // the value range from - to 
  // printf("FLT_BYTE_SIZE: %ld\n", sizeof(float)); // 4 byte
  // printf("FLT_MIN_SIZE: %g\n", (float) FLT_MIN); // FLT_MIN_SIZE: 1.17549e-38
  // printf("FLT_MAX_SIZE: %g\n", (float) FLT_MAX); // FLT_MAX_SIZE: 3.40282e+38
  // printf("FLT_DIGIT: %d\n", FLT_DIG); // FLT_DIGIT: 6

  // double data type consume 8 byte of memory space
  // the value range between 1 to 2
  // printf("DBL PRECISION: %d\n", DBL_DIG);
  // printf("DBL MIN VALUE: %f\n", DBL_MIN);
  printf("DBL MAX VALUE: %f\n", DBL_MAX);
  

  return 0;
}
