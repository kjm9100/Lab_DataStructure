#include <stdio.h>
int main()
{

int i;
int *ptr;
int **dptr;

printf("[----- [������] [2021041068] -----]\n\n");

i = 1234;
/* ������ ���� ptr�� i�� �ּҰ��� �Ҵ��ϱ� ������
i�� ���� �ּҰ�, ptr�� ���� �ּҰ��� Ȯ���ϱ� ���� ���̴�. */
/* ptr�� ������ �ƹ� �ּҰ��� �Ҵ���� �ʾұ� ������
�����Ⱚ(���ǹ��� ��)�� ����ִ�. ptr�� �ּҰ���
������ ���� ptr ��ü�� �ּҰ��̴�. */
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);

ptr = &i; /* ptr is now holding the address of i */
/* ������ ���� ptr�� i�� �ּҰ��� �Ҵ��� ���� 
i�� ���� �ּҰ�, ptr�� �ּҰ��� ��, �׸���
ptr�� ���� �������� ���� ���� Ȯ���ϱ� ���� ���̴�. */
/* i�� �ּҸ� �Ҵ��� ���̱� ������ 
ptr�� ���� ����ϸ� i�� �ּҰ��� ������,
ptr�� ���� �����ϸ� i�� ���� 1234�� ���´�. */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);
printf("value of *ptr == %d\n", *ptr);

dptr = &ptr; /* dptr is now holding the address of ptr */
/* ���� ������ ���� dptr�� ������ ���� ptr�� �ּҰ���
 �Ҵ��� �Ŀ� i, ptr, dptr�� ���� �ּҰ�, �׸��� ptr�� ������, 
 dptr�� �������� ������������ Ȯ���ϱ� ���� ���̴�. */
 /* i�� ptr�� ���� �ּҰ�, �׸��� ptr�� �������� ���� �����ϴ�.
 dptr�� �ּҰ��� ���� ������ ���� dptr ��ü�� �ּҰ��̴�.
 dptr�� ���� ptr�� �ּҰ��̴�. dptr�� �������� ptr�� ��,
 ��, i�� �ּҰ��̰�, dptr�� ������������ i�� ���� 1234�̴�. */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);
printf("value of *ptr == %d\n", *ptr);
printf("value of dptr == %p\n", dptr);
printf("address of ptr == %p\n", &dptr);
printf("value of *dptr == %p\n", *dptr);
printf("value of **dptr == %d\n", **dptr);

*ptr = 7777; /* changing the value of *ptr */
/* ptr�� �������� 7777�� �ٲٰ� �� ���� i�� ��,
ptr�� ������, dptr�� ������������ Ȯ���ϱ� ���� ���̴�. */
/* ptr�� ������ ���� 7777�� �ٲ�� ������ ptr�� �ּҰ�,
i�� ���� 7777�� �ٲ� ���̴�. �׷��� ������ i�� ����
ptr�� ������, dptr�� ���������� ��� 7777�� ���´�. */
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i);
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);

**dptr = 8888; /* changing the value of **dptr */
/* dptr�� ������������ 8888�� �ٲٰ� �� ���� i�� ��,
 ptr�� ������, dptr�� ������������ Ȯ���ϱ� ���� ���̴�. */
 /* dptr�� �����ϸ� ptr�� ��� ���� i�� �ּҰ��̰�,
 �׿� �� �� �� �����ϸ�, i�� ���� ���̴�. 
 ��, dptr�� ������������ 8888�� �ٲ� ���� i�� ����
 8888�� �ٲ� ���� ���̴�. �׷��� ������ i�� ����
 ptr�� ������, dptr�� ���������� ��� 8888�� ���´�. */
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);

return 0;

}