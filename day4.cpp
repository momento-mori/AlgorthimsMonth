/*
   Mininmum Swaps to Make Sequences Increasing

   Given 2 integer sequences that are guarenteed to be made into strictly
   increasing sequences. Whats the minumum number of swaps between indexes
   sequences needed to make both strictly increasing.

   Note that the swaps must be between A[i] and B[i]
*/

#include <iostream>
#include <vector>

int minSwap(std::vector<int> &A, std::vector<int> &B)
{

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
------------------------------------------------------------------------------*/
