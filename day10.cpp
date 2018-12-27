/*
  300. Longest Increasing Subsequence

  Given an unsorted array of integers, find the length of longest increasing 
  subsequence.

   Input:
  [10 9 2 5 3 7 101 18]
   Ouput
  4
   Explanation
  [2 3 7 101] = 4. 

  O(N^2) is required.
  O(N log N) is better.
*/

#include <iostream>
#include <vector>

int lengthOfLIS(std:int lengthOfLIS(std::vector<int> &nums)
{
  std::vector<int> result;
  int N = nums.size();
  for(int i = 0; i < N; i++){
    result[i] = 1;
    for(int j = 0; j < i; j++){
      if(nums[i] > nums[j])
        // result[i] += 1; attempt 1 obviously wrong. we need max of i & j 
        //result[i] = max(nums[i], nums[j]);
        result[i] = max(nums[i]+1, nums[j]);
    }
  }
  return result[N-1];
}

int main()
{
}

/* 
    Analysis:
  Attempt was pretty poor tbh. But starting to reason about the problems better so 
  thats good.

  If I know it needs to be broken down into cacheable sub problems what do I cache?
    Well you cache the longest subsequence up to the current index.
    This can be accomplished in O(N^2) which obviously is 2 for loops.
    The gotcha here is that you must set every new indexes LIS value to 1.
      This is done after incrementing the idx of the outer for loop.
    Then on the inner for loop we check for the max of idx and idx-1
      idx and idx-1 are itrs for the for loops being used.

  Having an issue with leetcode and some dumb bug. Think I fully grasph LIS though.
    Will verify code works when I wake up.

    So working form this how would I implement it with a pair of integers where I only
    have to run LIS on the second int in the pair (a, b)  

*/
