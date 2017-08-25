/* Exercise 7.7: Most frequent element in array is identified
   Jianzhong Qi and Alistair Moffat, May 2013
   Based on insertionsort.c from Chapter 7
 */

#include <stdio.h>
#include <stdlib.h>

/* maximum array size allowed */
#define MAXVALS 1000

/* function prototypes */
int read_int_array(int A[], int n);
int most_frequent(int A[], int n);
void print_int_array(int A[], int n);

int
main(int argc, char *argv[]) {

	int numbers[MAXVALS], valid;

	/* get the input */
	valid = read_int_array(numbers, MAXVALS);

	/* call the function of interest */
	printf("The most frequent item is %d\n",
		most_frequent(numbers, valid));

	/* done */
	return 0;
}

/* find the most frequent integer in an array */
int
most_frequent(int A[], int n) {
	/* Your code goes here. */
	return /* most frequent */
}

/* read integers from keyboard and store them in an array. */
int
read_int_array(int A[], int maxvals) {
	/* Your code goes here. */
  /* return length of array read in. */
}
