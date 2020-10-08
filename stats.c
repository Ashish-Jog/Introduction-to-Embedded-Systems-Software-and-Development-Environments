/******************************************************************************
 * Copyright (C) 2020 by Ashish Hemant Jog
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Source File that contains the data and functions to manipulate and prints the statistics >
 * 
 * <This is the part of Coursera , Intro to embedded course : Week 1 : Peer Reviewed Assignment 1>
 * <The program finds the maxima , minima , median and finally sorts the array in an ascending order and prints it>
 * @author <Ashish Hemant Jog>
 * @date <05/10/2020>
 * 
 */

// Code starts here 

#include <stdio.h>
#include <math.h>
#include "stats.h"
#define SIZE (40)

unsigned char sortedArray[SIZE] = {0}; 

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
              draw_linebreaks();                  
              print_array(test);
              draw_linebreaks();        
              find_maximum(test);
              draw_linebreaks();
              find_minimum(test);
              draw_linebreaks();
              find_mean(test);
              draw_linebreaks();
              sort_array(test);
              draw_linebreaks();
              find_median();
              draw_linebreaks();
                               
}

void draw_linebreaks()
{
		printf("\n------------------------------------------------------------------------------\n");
}

void print_array(unsigned char arr[])
{
		
		
		
}

void find_maximum(unsigned char arr[])
{
		
}

void find_minimum(unsigned char arr[])
{
		
		
}

void find_mean(unsigned char arr[])
{
		
				
}


void find_median( )
{
	   
	   				
}

void sort_array(unsigned char arr[])
{
		
}
		



