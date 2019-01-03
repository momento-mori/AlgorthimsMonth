/*
  1.2.18
    35. Search Insert Position
  Given a sorted array and a target value, return the index if the target is 
  found. If not, return the index where it would be if it were inserted in 
  order.
    You can assume no duplicates in the array.

    Input:
  [1 3 5 6], 5 
    Ouput:
  2

    Input
  [1 3 5 6], 2
    Ouput
  1
    Input
  [1 3 5 6], 7
    Output
  4
*/

#include <vector>

int searchInsertPosition(std::vector<int> &nums, int target)
{
  int beg = 0, end = nums.size()-1;

  while(beg <= end){
    int middle = (beg+end)/2;
    if(nums[middle] == target){
      return middle;
    }
    if(nums[middle] > target){
      end = middle-1;
    }
    else{
      begin = middle+1;
    }
  }
  //return middle+1; // *** BUGS ***
  return low;
}

int main()
{ 
}
/*  
    *** Approach ***
  
*/
