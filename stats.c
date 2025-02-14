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

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int find_mean(unsigned char arr[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return sum / len;
}

int find_median(unsigned char arr[], int len)
{
    if (len % 2 == 0)
    {
        return (arr[len / 2] + arr[len / 2 - 1]) / 2;
    }
    else
    {
        return arr[len / 2];
    }
}

int find_maximum(unsigned char arr[], int len)
{
    int max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int find_minimum(unsigned char arr[], int len)
{
    int min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

unsigned char *sort_array(unsigned char arr[], int len)
{
    int temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

void print_statistics(int max, int min, int mean, int median)
{
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Mean: %d\n", mean);
    printf("Median: %d\n", median);
}

void main()
{

    unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                                114, 88, 45, 76, 123, 87, 25, 23,
                                200, 122, 150, 90, 92, 87, 177, 244,
                                201, 6, 12, 60, 8, 2, 5, 67,
                                7, 87, 250, 230, 99, 3, 100, 90};

    /* Other Variable Declarations Go Here */
    /* Statistics and Printing Functions Go Here */

    int len = sizeof(test) / sizeof(test[0]);

    int mean = find_mean(test, len);
    int max = find_maximum(test, len);
    int min = find_minimum(test, len);

    unsigned char *sorted = sort_array(test, len);
    int med = find_median(sorted, len);

    print_statistics(max, min, mean, med);
}

/* Add other Implementation File Code Here */
