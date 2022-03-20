#include <stdio.h>
int main()
{
//알아볼 각 자료형별 변수를 선언
char charType; 
int integerType;
float floatType;
double doubleType;

printf("[----- [김지민] [2021041068] -----]\n\n");

//sizeof함수를 이용해 자료형이 각기 다른 변수의 크기(단위: 바이트)를 알아보기 위한 것이다.
/*char형 변수는 1바이트, int형 변수는 4바이트,
 float형 변수는 4바이트, double형 변수는 8바이트의 크기를 가진다.*/
printf("Size of char: %ld byte\n",sizeof(charType));
printf("Size of int: %ld bytes\n",sizeof(integerType));
printf("Size of float: %ld bytes\n",sizeof(floatType));
printf("Size of double: %ld bytes\n",sizeof(doubleType));
printf("-----------------------------------------\n");

//sizeof함수를 이용해 자료형별 크기(단위: 바이트)를 알아보기 위한 것이다.
/*char형은 1바이트, int형은 4바이트,
 float형은 4바이트, double형은 8바이트의 크기를 가진다.*/
printf("Size of char: %ld byte\n",sizeof(char));
printf("Size of int: %ld bytes\n",sizeof(int));
printf("Size of float: %ld bytes\n",sizeof(float));
printf("Size of double: %ld bytes\n",sizeof(double));
printf("-----------------------------------------\n");

//sizeof함수를 이용해 각 자료형 포인터의 크기(단위: 바이트)를 알아보기 위함
/*char형, int형, float형, double형 포인터는
 주소값을 나타내기 위한 것이기에 4바이트를 가진다.*/
printf("Size of char*: %ld byte\n",sizeof(char*));
printf("Size of int*: %ld bytes\n",sizeof(int*));
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));

return 0;
}