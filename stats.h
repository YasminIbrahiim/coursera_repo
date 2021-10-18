/*
  @file stats.h 
  @brief this file includes declarations and documentation for the functions from the stats.c file 

  @author Yasmeen Ibrahim
  @date 10/2021
 
 */
#ifndef __STATS_H__
#define __STATS_H__

unsigned char find_maximum(unsigned char *g);
/*
  @brief This function takes an array of data and a length, returns the maximum
 
  @param *g is a pointer to array "test"
  @return the maximum
 */
unsigned char find_minimum(unsigned char *m);
/*
  @brief This function takes an array of data and a length, returns the minimum
 
  @param *m is a pointer to array "test"
  @return the minimum
 */
unsigned char find_mean( unsigned char *y);
/*
  @brief This function takes an array of data and a length, returns the mean>
 
  @param *y is a pointer to array "test"
  @return the mean
 */
unsigned char find_median( unsigned char *v);
/*
  @brief This function takes an array of data and a length, returns the median
 
  @param *v is a pointer to array "test"
  @return the median
 */
unsigned char sort_array(unsigned char *s );
/* Given an array of data and a length, sorts the array from largest to smallest.  
(The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )


*/
int print_statistics();
#endif /* __STATS_H__ */