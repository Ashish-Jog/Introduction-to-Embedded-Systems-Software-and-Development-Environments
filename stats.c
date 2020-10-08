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
		
		printf("\nThe Original array is :\n");	
		for (int counter=0; counter<SIZE; counter++)
		{
		  printf("test[%d] : %u \n",counter,arr[counter]);
		}
		
}

void find_maximum(unsigned char arr[])
{
		int maxValHolder = arr[0], i=0, maxIndexHolder=0;		
		for( i=1; i<SIZE; i++ ) 
		{
		   if(arr[i]>maxValHolder)	
		   {
		    maxValHolder = arr[i];
		    maxIndexHolder=i;
		    
		   }
		}
		printf("\nMax Value : %d At Index : %d\n",maxValHolder,maxIndexHolder);
		
}

void find_minimum(unsigned char arr[])
{
		int minValHolder = arr[0], i=0, minIndexHolder=0;		
		for( i=1; i<SIZE; i++ ) 
		{
		   if(arr[i]<minValHolder)	
		   {
		    minValHolder = arr[i];
		    minIndexHolder=i;
		    
		   }
		}
		printf("\nMin Value : %d At Index : %d\n",minValHolder,minIndexHolder);
		
}

void find_mean(unsigned char arr[])
{
		int sum = 0, i=0;
		int mean = 0;
		for(i=0;i<SIZE;i++)
		{
		  sum += arr[i];		
		}
		mean = sum/(SIZE);
		printf("\nMean : %d\n", mean);
				
}


void find_median( )
{
	    if(SIZE%2 != 0)
	    {
	      printf("\nMedian is : %u\n",sortedArray[SIZE/2]);	 // For odd list of numbers
	    }
	    else
	    {
	     
              printf("\nMedian is : %u\n",((sortedArray[(SIZE/2)-1]+sortedArray[(SIZE/2)])/2)); // For even list of numbers	    
	    }
	   				
}

void sort_array(unsigned char arr[])
{
		int i=0, j=0, temp=0;
		for(i=0;i<SIZE;i++)
		{
			for(j=i+1;j<SIZE;j++)
			{
			   	if(arr[i]>arr[j])
			   	{
			   	  temp = arr[j];
			   	  arr[j]=arr[i];
			   	  arr[i]=temp;
			   	}	
		   	}
		}
		printf("\nSorted Array is : \n");
		for(i=0;i<SIZE;i++)
		{
		sortedArray[i] = arr[i];
		printf("\n%u\n",sortedArray[i]);	
		}
}
		



