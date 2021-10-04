#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_LENGTH 10

void print_int_arr(int *arr) {
  int i;
  printf("[");
  for (i = 0; i < ARR_LENGTH; i++) {
    printf(" %u", *(arr + i));
  }
  printf("]\n");
}

void avg_of_elems(int *arr) {
  int i;
  double ans = 0;
  for (i = 0; i < ARR_LENGTH; i++) {
    ans += *(arr + i);
  }
  ans /= ARR_LENGTH;
  printf("Average of values: %0.3lf", ans);
}

void arr_copy(int *arr, int *ray) {
  int i;
  for (i = 0; i < ARR_LENGTH; i++) {
    *(ray + i) = *(arr + i);
  }
  printf("First array: ");
  print_int_arr(arr);
  printf("Second array: ");
  print_int_arr(ray);
}

int main() {
  int x[ARR_LENGTH];
  int y[ARR_LENGTH];

  int i;
  srand(time(NULL));
  for (i = 0; i < ARR_LENGTH; i++) {
    x[i] = rand();
  }

  for (i = 0; i < ARR_LENGTH; i++) {
    y[i] = rand();
  }

  printf("First array: ");
  print_int_arr(x);
  printf("Second array: ");
  print_int_arr(y);
  printf("\n");

  avg_of_elems(x);
  printf(" (First array)\n");
  avg_of_elems(y);
  printf(" (Second array)\n\n");

  printf("Copying the first array into the second array ...\n");
  arr_copy(x, y);

  return 0;
}
