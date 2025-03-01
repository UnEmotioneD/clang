/* Copyright 2024 김찬희*/
#include <stdio.h>

int main(void) {
  // Declared primitive variable and assigned integer value to it
  int x = 10;

  // Declared pointer variable and assigned memory address of variable 'x'
  int *ptr = &x;

  printf("Value of x ( x ) : %d\n", x);
  printf("Address of x ( &x ) : %p\n", &x);
  printf("Value of ptr which is address ( ptr ) : %p\n", ptr);
  printf("Value of variable that ptr is pointing to ( *ptr )  : %d\n\n", *ptr);

  // Changing the value with pointer
  *ptr = 20;
  printf("Value of x ( x ) : %d", x);
  printf("Value of variable that ptr is pointing to ( *ptr )  : %d\n\n", *ptr);

  // NULL pointer
  int *nullPtr = NULL;
  printf("Value of nullPtr (NULL pointer): %p\n", nullPtr);
  if (nullPtr == NULL) {
    printf(
        "nullPtr is NULL. It does not point to any valid memory location.\n\n");
  }

  // Pointer arithmetic
  int arr[3] = {1, 2, 3};
  int *arrPtr = arr;
  for (int i = 0; i < 3; i++) {
    printf("Value of arr[%d] : %d (Address : %p)\n", i, *arrPtr + i,
           arrPtr + i);
  }
  printf("\n");

  // Variable type must match between the actual variable and pointer
  float pi = 3.14;
  float *ptrFloat = &pi;

  printf("Value of pi ( pi ) : %f\n", pi);
  printf("Address of pi ( &pi ) : %p\n", &pi);
  printf("Value of ptr which is address ( ptrFloat ) : %p\n", ptrFloat);
  printf("Value of variable that ptr is pointing to ( *ptrFloat )  : %f\n\n",
         *ptrFloat);

  return 0;
}
