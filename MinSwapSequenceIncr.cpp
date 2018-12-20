/*
   Mininmum Swaps to Make Sequences Increasing

   Given 2 integer sequences that are guarenteed to be made into strictly
   increasing sequences. Whats the minumum number of swaps between indexes
   sequences needed to make both strictly increasing.

   Note that the swaps must be between A[i] and B[i]

   	Input:
   A = [1 3 5 4], B = [1 2 3 7]
  	Output 
   1 since only have to swap A[3] && B[3]
*/

#include <iostream>
#include <vector>

int minSwap(std::vector<int> &A, std::vector<int> &B)
{
  int vec_len = A.size();
  std::vector<std::vector<int> > dp(vec_len, std::vector<int>(2, INT32_MAX));
  dp[0][0] = 0; 
  dp[0][1] = 1;
  
  for(int i = 1; i < vec_len; ++i){
    if(A[i-1] < A[i] && B[i - 1] < B[i]){
      dp[i][0] = min(dp[i][1], dp[i - 1][0]);
      dp[i][1] = min(dp[i][1], dp[i - 1][1] + 1);
    }
  
    if(A[i - 1] < B[i] && B[i - 1] < A[i]){
      dp[i][0] = min(dp[i][0], dp[i-1][1]);
      dp[i][1] = min(dp[i][1], dp[i -1][0] + 1); 
    }
  }
  
  return min(dp[vec_len - 1][0], dp[vec_len - 1][1]);
}

int main()
{

}
/*------------------------------------------------------------------------------
   Analysis.
 
  * Since we're asked for the minimum number of swaps we need to maintain 
    how many time we needed to make a swap to make the list strinctly 
    increasing and how many swaps we DIDNT make. The minimum of these two
    values will tell us the answer.

  * Clever think to do here is use vectors for swap and no_swap that way we 
    can pass std::min(swap.back(), no_swap.back()) To use an idomatic way of 
    finding mininum of two lists.

  * Not every freaking if needs an else. You can just make another if instead
    of working so hard to fit things into 2 conditions.

  * Really important to note that in dynamic programming your for loop idx's 
    start from 1.


------------------------------------------------------------------------------*/
