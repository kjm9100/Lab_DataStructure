#include <stdio.h>
int main()
{
//�˾ƺ� �� �ڷ����� ������ ����
char charType; 
int integerType;
float floatType;
double doubleType;

printf("[----- [������] [2021041068] -----]\n\n");

//sizeof�Լ��� �̿��� �ڷ����� ���� �ٸ� ������ ũ��(����: ����Ʈ)�� �˾ƺ��� ���� ���̴�.
/*char�� ������ 1����Ʈ, int�� ������ 4����Ʈ,
 float�� ������ 4����Ʈ, double�� ������ 8����Ʈ�� ũ�⸦ ������.*/
printf("Size of char: %ld byte\n",sizeof(charType));
printf("Size of int: %ld bytes\n",sizeof(integerType));
printf("Size of float: %ld bytes\n",sizeof(floatType));
printf("Size of double: %ld bytes\n",sizeof(doubleType));
printf("-----------------------------------------\n");

//sizeof�Լ��� �̿��� �ڷ����� ũ��(����: ����Ʈ)�� �˾ƺ��� ���� ���̴�.
/*char���� 1����Ʈ, int���� 4����Ʈ,
 float���� 4����Ʈ, double���� 8����Ʈ�� ũ�⸦ ������.*/
printf("Size of char: %ld byte\n",sizeof(char));
printf("Size of int: %ld bytes\n",sizeof(int));
printf("Size of float: %ld bytes\n",sizeof(float));
printf("Size of double: %ld bytes\n",sizeof(double));
printf("-----------------------------------------\n");

//sizeof�Լ��� �̿��� �� �ڷ��� �������� ũ��(����: ����Ʈ)�� �˾ƺ��� ����
/*char��, int��, float��, double�� �����ʹ�
 �ּҰ��� ��Ÿ���� ���� ���̱⿡ 4����Ʈ�� ������.*/
printf("Size of char*: %ld byte\n",sizeof(char*));
printf("Size of int*: %ld bytes\n",sizeof(int*));
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));

return 0;
}