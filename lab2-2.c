#include <stdio.h>
int main()
{

int i;
int *ptr;
int **dptr;

printf("[----- [김지민] [2021041068] -----]\n\n");

i = 1234;
/* 포인터 변수 ptr에 i의 주소값을 할당하기 이전에
i의 값과 주소값, ptr의 값과 주소값을 확인하기 위한 것이다. */
/* ptr의 값에는 아무 주소값이 할당되지 않았기 때문에
쓰레기값(무의미한 값)이 들어있다. ptr의 주소값은
포인터 변수 ptr 자체의 주소값이다. */
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);

ptr = &i; /* ptr is now holding the address of i */
/* 포인터 변수 ptr에 i의 주소값을 할당한 후의 
i의 값과 주소값, ptr의 주소값과 값, 그리고
ptr의 값을 참조했을 때의 값을 확인하기 위한 것이다. */
/* i의 주소를 할당한 후이기 떄문에 
ptr의 값을 출력하면 i의 주소값이 나오고,
ptr의 값을 참조하면 i의 값인 1234가 나온다. */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);
printf("value of *ptr == %d\n", *ptr);

dptr = &ptr; /* dptr is now holding the address of ptr */
/* 이중 포인터 변수 dptr에 포인터 변수 ptr의 주소값을
 할당한 후에 i, ptr, dptr의 값과 주소값, 그리고 ptr의 참조값, 
 dptr의 참조값과 이중참조값을 확인하기 위한 것이다. */
 /* i와 ptr의 값과 주소값, 그리고 ptr의 참조값은 위와 동일하다.
 dptr의 주소값은 이중 포인터 변수 dptr 자체의 주소값이다.
 dptr의 값은 ptr의 주소값이다. dptr의 참조값은 ptr의 값,
 즉, i의 주소값이고, dptr의 이중참조값은 i의 값인 1234이다. */
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
/* ptr의 참조값을 7777로 바꾸고 난 후의 i의 값,
ptr의 참조값, dptr의 이중참조값을 확인하기 위한 것이다. */
/* ptr을 참조해 값을 7777로 바꿨기 때문에 ptr의 주소값,
i의 값을 7777로 바꾼 것이다. 그렇기 떄문에 i의 값과
ptr의 참조값, dptr의 이중참조값 모두 7777로 나온다. */
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i);
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);

**dptr = 8888; /* changing the value of **dptr */
/* dptr의 이중참조값을 8888로 바꾸고 난 후의 i의 갑,
 ptr의 참조값, dptr의 이중참조값을 확인하기 위한 것이다. */
 /* dptr을 참조하면 ptr에 담긴 값인 i의 주소값이고,
 그에 한 번 더 참조하면, i의 값인 것이다. 
 즉, dptr의 이중참조값을 8888로 바꾼 것은 i의 값을
 8888로 바꾼 것인 셈이다. 그렇기 때문에 i의 값과
 ptr의 참조값, dptr의 이중참조값 모두 8888로 나온다. */
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);

return 0;

}