/*
   Move Zeros

   Given an array, move all 0's to end while maintaining relative order of 
   non-zero elements.

     Input:
  [0 1 0 3 12]
     Output:
  [1 3 12 0 0]

    Approach:
  Just iterate through when you encounter 0 swap with farthest non-zero element

  Have to do it in place with 2 pointers.

*/

#include <iostream>
#include <vector>

void moveZeros(std::vector<int>&nums)
{
  const int N = nums.size();
  for(int i = 0; i < N; i++){
    if(nums[i] != 0){
      swap(nums[i], nums[j++]);
    }  
  }  
}

int main()
{

}
