/* Exercise 7.9 in Programming, Problem Solving, and Abstraction

   Determine the number of ascending runs in an array.

   Alistair Moffat, October 2013.

*/

#include <stdio.h>
#include <stdlib.h>

#define MAXVALS 1000

/* function prototypes */

int read_int_array(int[], int);
int num_asc_runs(int[], int);
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
	k = num_asc_runs(numbers, valid);
	printf("There are %d runs\n", k);
	return 0;
}

int
read_int_array(int A[], int maxvals) {
	/* Your code goes here. */
}

/* the function actually required -- a simple linear scan to count
   the number of adjacent pairs where there is a decrease in value
   in the supplied array
*/
int
num_asc_runs(int A[], int n) {
	/* Your code goes here. */
}

void
print_int_array(int A[], int n) {
	/* Your code goes here. */
}
