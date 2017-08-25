/* Exercise 7.8 in Programming, Problem Solving, and Abstraction

   Function that identifies the k'th smallest value in array A
   by repeatedly finding and eliminating from consideration large items.

   Alistair Moffat, August 2012

*/

#include <stdio.h>
#include <stdlib.h>

#define MAXVALS 1000

/* function prototypes */

int read_int_array(int[], int);
int kth_smallest(int[], int, int);
void print_int_array(int[], int);

/* scaffolding to test the required function
*/
int
main(int argc, char *argv[]) {
	int numbers[MAXVALS], valid, k;
	valid = read_int_array(numbers, MAXVALS);
	printf("Array: ");
	print_int_array(numbers, valid);
	/* test some values */
	for (k=0; k<valid; k++) {
		printf("The %d'th smallest is %d\n", k,
			kth_smallest(numbers, valid, k));
	}
	return 0;
}

int
read_int_array(int A[], int maxvals) {
	/* Your code goes here. */
}

/* the function actually required -- returns index of k'th smallest
   in the supplied array

   note -- this is not an efficient function, running time is O(n^2);
   but hey, at least it works...
*/
int
kth_smallest(int A[], int n, int k) {
	/* Your code goes here. */
}

void
print_int_array(int A[], int n) {
	/* Your code goes here. */
}
