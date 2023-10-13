
/******************************************************************************
 * Copyright (C) 2023 Kelvin Lewis Ireland
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

#ifndef STATS_H
#define STATS_H

#define SIZE (40) // Define the SIZE macro here

// Function prototypes
unsigned char find_maximum(unsigned char *data, unsigned int length);
unsigned char find_minimum(unsigned char *data, unsigned int length);
unsigned char find_mean(unsigned char *data, unsigned int length);
unsigned char find_median(unsigned char *data, unsigned int length);
void sort_array(unsigned char *data, unsigned int length);
void print_statistics(unsigned char *data, unsigned int length);

#endif








 






























