/**
 * @file sorts.cpp
 * @author WARG
 *
 *  Copyright (c) 2015, Waterloo Aerial Robotics Group (WARG)
 *  All rights reserved.
 *
 *  This software is licensed under a modified version of the BSD 3 clause license
 *  that should have been included with this software in a file called COPYING.txt
 *  Otherwise it is available at:
 *  https://raw.githubusercontent.com/UWARG/computer-vision/master/COPYING.txt
 */
 
#include "sorts.h"

Sorts::*mergesort(int arrSize, int nums[]){
    /**An implementation of the mergesort sorting algorithms for an int array
    */

    /** print initial array*/
    for (int i = arrSize-1; i >= 0; i--){
        printf("%d, ", nums[i]);
    }
    printf("\n");

    /**print final array*/
    for (int i = arrSize-1; i >= 0; i--){
        printf("%d, ", nums[i]);
    } 
    return nums; 
}
