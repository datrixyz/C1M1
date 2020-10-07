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
 * @file stats.h 
 * @brief Performs statistical analytics on a dataset.
 *
 * This is a header file of a program prints statistical analytics 
 * such as maximum, minimum, mean, and median of a data set to 
 * the screen in a sorted and nicley formatted  presentation.
 *
 * @author Dariush Valipour Hafshejani
 * @date 10/7/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Declarations and Function Comments */ 
void print_statistics(unsigned char *array);
/********************************** 
 * @brief Prints statistical data
 *
 * This function takes an array input
 * and will return the statistical data.
 * of the array including maximum,minimum,mean, and median.
 *
 * @param array An unsingned char pointer to elements of a dataset.
 *
 * @return none
 **********************************/

void print_array(unsigned char *array,unsigned int length);
/********************************** 
 * @brief Prints elements of an array
 *
 * This function takes an array and its lenght as inputs.
 * It will elements of the array to the screen
 *
 * @param array An unsigned char pointer to elements of a dataset.
 * @param length An unsinged integer as the size of the array.
 *
 * @return none
 **********************************/

int find_median(unsigned char *array,unsigned int length);
/********************************** 
 * @brief Returns the median value of an array
 *
 * This function takes an array and its length as inputs.
 * It will calculate and return the median value.
 *
 * @param array An unsigned char pointer to elements of a dataset.
 * @param length An unsinged integer as the size of the array.
 *
 * @return an integer median value of the given array.
 **********************************/

int find_mean(unsigned char *array,unsigned int length);
/********************************** 
 * @brief Returns the mean value of an array
 *
 * This function takes an array and its length as inputs.
 * It will calculate and return the mean value.
 *
 * @param array An unsigned char pointer to elements of a dataset.
 * @param length An unsinged integer as the size of the array.
 *
 * @return an integer mean value of the given array.
 **********************************/

int find_maximum(unsigned char *array,unsigned int length);
/********************************** 
 * @brief Returns the maximum value of an array.
 *
 * This function takes an array and its length as inputs.
 * It will calculate and return the maximum value element.
 *
 * @param array An unsigned char pointer to elements of a dataset.
 * @param length An unsinged integer as the size of the array.
 *
 * @return an integer maximum value of the given array.
 **********************************/

int find_minimum(unsigned char *array,unsigned int length);
/********************************** 
 * @brief Returns the minimum value of an array
 *
 * This function takes an array and its length as inputs.
 * It will calculate and return the median value element.
 *
 * @param array An unsigned char pointer to elements of a dataset.
 * @param length An unsinged integer as the size of the array.
 *
 * @return an integer minimum value of the given array.
 **********************************/

void  sort_array(unsigned char *array,unsigned int length);
/********************************** 
 * @brief Sorts a array in a descending order.
 *
 * This function takes an array and its length as inputs.
 * It will sort the array from largest to smallest element.
 *
 * @param array An unsigned char pointer to elements of a dataset.
 * @param length An unsinged integer as the size of the array.
 *
 * @return none
 **********************************/

#endif /* __STATS_H__ */
