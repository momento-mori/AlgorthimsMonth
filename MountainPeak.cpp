/*-----------------------------------------------------------------------------
  Peak Index in Mountain Array

  Given an Array A that increases for some time then dercreases;
  find the index at which A[i-1] < A[i] > A[i] > A[i+1]
------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------
   Approach: Problem statement says we're guarenteed such a peak.
             So simplest way it to just have a slideing window of size 3.
             When our window has the property that W[i-1] < W[i] > W[i+1] 
             return i.
------------------------------------------------------------------------------*/
#include <iostream>

int peakIndex(vector<int> &A){
  
  for(int i = 0; i +1 < A.size(); i++){
    if(A[i] > A[i+1])
      return i;
  } 

}

int main()
{

}

/*
   Analysis:
 * First attempt with window will work. Didn't account for peak appearing in 
   opposite direction. 
 * Made it to complicated. Just look for the first time you have A[i] > A[i+1]
   since problem statement wording makes the ascent always occur first.
 * Also had a stray ; after if statement when trying to submit, threw me off.
*/
