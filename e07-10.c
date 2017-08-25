/* Exercise 7.10 in Programming, Problem Solving, and Abstraction

   Count inversions in an array.

   Alistair Moffat, October 2013.

*/

#include <stdio.h>
#include <stdlib.h>

#define MAXVALS 1000

/* function prototypes */

int read_int_array(int[], int);
int num_inversions(int[], int);
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
	k = num_inversions(numbers, valid);
	printf("There are %d inversions\n", k);
	return 0;
}

int
read_int_array(int A[], int maxvals) {
	/* Your code goes here. */
}

/* the function actually required -- a quadratic-time scan to count
   the number of pairs of items that are in the wrong order in the
   in the supplied array
*/
int
num_inversions(int A[], int n) {
	/* Your code goes here. */
}

void
print_int_array(int A[], int n) {
	/* Your code goes here. */
}
