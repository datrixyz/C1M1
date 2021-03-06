/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Performs statistical analytics on a dataset.
 *
 * This program prints statistical analytics such as
 * maximum, minimum, mean, and median of a data set to
 * the screen in a sorted and nicley formatted  presentation.
 *
 * @author Dariush Valipour Hafshejani
 * @date 10/7/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

print_array(test,SIZE);
sort_array(test,SIZE);
print_statistics(test);
}

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions */

void print_statistics(unsigned char *array){
  printf("==========Statistical analytics============\n");
  printf("Median :  %d\n",find_median(array,SIZE));
  printf("Mean   :  %d\n",find_mean(array,SIZE));
  printf("Maximum:  %d\n",find_maximum(array,SIZE));
  printf("Minimum:  %d\n",find_minimum(array,SIZE));
  printf("===========================================\n");
}

void print_array(unsigned char *array,unsigned int length){
  printf("The given array: ");
  for (unsigned int i=0;i<length;i++)
    printf("%d ",array[i]);
  printf("\n\n");
}

int find_median(unsigned char *array,unsigned int length){
  if (length%2==0)
  	return (array[length/2]+array[length/2+1])/2;  //Array is sorted descending
  else
	return array[(length-1)/2];
}

int find_mean(unsigned char *array,unsigned int length){
  int sum=0;
  for (unsigned int i=0;i<length;i++)
	sum+=(int)array[i];
  return sum/length;
}

int find_maximum(unsigned char *array,unsigned int length){
  return array[0];  //array sorted in a descending order
}

int find_minimum(unsigned char *array,unsigned int length){
  return array[length-1];  //last element in sorted array is the minimum element
}

void sort_array(unsigned char *array,unsigned int length){
  char temp;
  for (unsigned int i=0;i<length-1;i++){
	   for (unsigned int j=0;j<length-i-1;j++){
	      if ((int)array[j]<(int)array[j+1]){
	        temp=array[j];
	        array[j]=array[j+1];
	        array[j+1]=temp;
	      }
	   }
  }
}



/* Add other Implementation File Code Here */
