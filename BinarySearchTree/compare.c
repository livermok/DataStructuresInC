/* CS261- Assignment 4 - compare.c
Name:Kyle Livermore
Date: 7 Nov 2015
struct compare function for the data struct.
*/
#include <stdio.h>
#include <assert.h>
#include "bst.h"
#include "structs.h"

/*----------------------------------------------------------------------------
 very similar to the compareTo method in java or the strcmp function in c. it
 returns an integer to tell you if the left value is greater then, less then, or
 equal to the right value. you are comparing the number variable, letter is not
 used in the comparison.

 if left < right return -1
 if left > right return 1
 if left = right return 0
 */

 /*Define this function, type casting the value of void * to the desired type.
  The current definition of TYPE in bst.h is void*, which means that left and
  right are void pointers. To compare left and right, you should first cast
  left and right to the corresponding pointer type (struct data *), and then
  compare the values pointed by the casted pointers.

  DO NOT compare the addresses pointed by left and right, i.e. "if (left < right)",
  which is really wrong.
 */
int compare(TYPE left, TYPE right)
{
    /*FIXME: write this*/
	struct data *tempLeft = (struct data*)left;
	struct data *tempRight = (struct data*)right;

	if (tempLeft->number > tempRight->number)
	{
		return 1;
	}
	else if (tempLeft->number < tempRight->number)
	{
		return -1;
	}
	else
		return 0;

}

/*Define this function, type casting the value of void * to the desired type*/
void print_type(TYPE curval)
{
    /*FIXME: write this*/
	struct data *temp = (struct data*)curval;
	printf("%d\n", temp->number);
}


