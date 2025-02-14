#include <stdio.h>


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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */


/**
 * @brief Prints the statistics of the data set.
 *
 * This function takes the maximum, minimum, mean, and median values
 * and prints them to the standard output.
 *
 * @param max The maximum value in the data set.
 * @param min The minimum value in the data set.
 * @param mean The mean (average) value of the data set.
 * @param median The median value of the data set.
 */
void print_statistics(int max, int min, int mean, int median);

/**
 * @brief Prints the elements of the array.
 *
 * This function takes an array and its length as input and prints
 * each element of the array to the standard output.
 *
 * @param arr The array of integers to be printed.
 * @param len The length of the array.
 * @return The number of elements printed.
 */
int print_array(int arr[], int len);

/**
 * @brief Finds the median of the data set.
 *
 * This function calculates the median value of the given array.
 *
 * @param arr The array of integers.
 * @param len The length of the array.
 * @return The median value of the array.
 */
int find_median(int arr[], int len);

/**
 * @brief Finds the mean of the data set.
 *
 * This function calculates the mean (average) value of the given array.
 *
 * @param arr The array of integers.
 * @param len The length of the array.
 * @return The mean value of the array.
 */
int find_mean(int arr[], int len);

/**
 * @brief Finds the maximum value in the data set.
 *
 * This function searches for the maximum value in the given array.
 *
 * @param arr The array of integers.
 * @param len The length of the array.
 * @return The maximum value in the array.
 */
int find_maximum(int arr[], int len);

/**
 * @brief Finds the minimum value in the data set.
 *
 * This function searches for the minimum value in the given array.
 *
 * @param arr The array of integers.
 * @param len The length of the array.
 * @return The minimum value in the array.
 */
int find_minimum(int arr[], int len);

/**
 * @brief Sorts the array in ascending order.
 *
 * This function sorts the given array and returns a pointer to the sorted array.
 *
 * @param arr The array of integers to be sorted.
 * @param len The length of the array.
 * @return A pointer to the sorted array.
 */
int* sort_array(int arr[], int len);
