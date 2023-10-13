/******************************************************************************
 * Copyright (C) 2023 by Kelvin Lewis - 
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
 * @author < Kelvin Lewis>
 * @date <13-10-2023  >
 *
 */


#include <stdio.h>
#include "stats.h"

/* Function to find the maximum value in the array */
unsigned char find_maximum(unsigned char *data, unsigned int length) {
    unsigned char max = data[0];
    for (unsigned int i = 1; i < length; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

/* Function to find the minimum value in the array */
unsigned char find_minimum(unsigned char *data, unsigned int length) {
    unsigned char min = data[0];
    for (unsigned int i = 1; i < length; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

/* Function to find the mean (average) value of the array */
unsigned char find_mean(unsigned char *data, unsigned int length) {
    unsigned long sum = 0;
    for (unsigned int i = 0; i < length; i++) {
        sum += data[i];
    }
    return (unsigned char)(sum / length);
}

/* Function to find the median value of the array */
unsigned char find_median(unsigned char *data, unsigned int length) {
    // Sort the array first
    sort_array(data, length);

    // Calculate the median
    if (length % 2 == 0) {
        return (data[length / 2 - 1] + data[length / 2]) / 2;
    } else {
        return data[length / 2];
    }
}

/* Function to sort the data array in descending order */
void sort_array(unsigned char *data, unsigned int length) {
    for (unsigned int i = 0; i < length - 1; i++) {
        for (unsigned int j = i + 1; j < length; j++) {
            if (data[i] < data[j]) {
                unsigned char temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

/* Function to print the statistics */
void print_statistics(unsigned char *data, unsigned int length) {
    printf("Data Set (Sorted in Descending Order):\n");
    for (unsigned int i = 0; i < length; i++) {
        printf("%d ", data[i]);
    }
    printf("\n\n");

    printf("Maximum: %d\n", find_maximum(data, length));
    printf("Minimum: %d\n", find_minimum(data, length));
    printf("Mean: %d\n", find_mean(data, length));
    printf("Median: %d\n", find_median(data, length));
}

int main() {
    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    sort_array(test, SIZE);
    print_statistics(test, SIZE);

    return 0;
}


