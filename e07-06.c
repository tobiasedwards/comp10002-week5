/* Exercise 7.6 in Programming, Problem Solving, and Abstraction

   Read an a set of numbers, sort using selection sort.
   Two versions are given, one recursive. Could also implement
   function index_of_largest using recursion if really want to.
   But no real advantage in this case, a loop is also fine.

   Function bubblesort is replaced in the program shown in
   Figures 7.2, 7.3, and 7.4

   Alistair Moffat, August 2012

*/

#include <stdio.h>

#define MAXVALS 1000

/* function prototypes */

int read_int_array(int[], int);
int index_of_largest(int[], int);
void sort_int_array(int[], int);
void sort_int_array_rec(int[], int);
void print_int_array(int[], int);
void int_swap(int*, int*);

int
main(int argc, char *argv[]) {
	int numbers[MAXVALS], valid;
	valid = read_int_array(numbers, MAXVALS);
	printf("Before: ");
	print_int_array(numbers, valid);
	selection_sort_int_array(numbers, valid);
	printf("After1: ");
	print_int_array(numbers, valid);
	selection_sort_int_array_rec(numbers, valid);
	printf("After2: ");
	print_int_array(numbers, valid);
	return 0;
}

int
read_int_array(int A[], int maxvals) {
	/* Your code goes here. */
	return n;
}

/* the new function -- implements selection sort by repeatedly swapping
   the next largest item in the array into the last position of a
   decreasing array segment
*/
void
selection_sort_int_array(int A[], int n) {
	/* Your code goes here. */
  return;
}

void
print_int_array(int A[], int n) {
	/* Your code goes here. */
}

/* exchange the values of the two variables indicated
	by the arguments */
void
int_swap(int *x, int *y) {
	/* Your code goes here. */
}
