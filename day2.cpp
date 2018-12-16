/*-----------------------------------------------------------------------------
  Peak Index in Mountain Array

  Given an Array A that increases for some time then dercreases;
  find the index at which A[i-1] < A[i] > A[i] > A[i+1]
------------------------------------------------------------------------------*/
/*
   Approach: Problem statement says we're guarenteed such a peak.
             So simplest way it to just have a slideing window of size 3.
             When our window has teh property that W[i-1] < W[i] > W[i+1] 
             return i.
*/
#include <iostream>

int peakIndex(vector<int> &A){

}

int main()
{

}
