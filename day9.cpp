/*
      646. Maximum Length of Pair Chain
  Given n pairs of numbers. In every pair, the first # is always smaller
  than the second number.

   Input:
  [[1 2] [2 3] [3 4]]
   Output:
  2

  ** Your brain should of mapped this to longest common subsequence **
    Now that was solved the only difference should be that our iterators 
    on the for loops correspond to the first pair integer and 
    the .second iterator is what we use in the max() and if(..) statements

*/

#include <iostream>
#include <vector>

int findLongestChain(std::vector<std::vector<int>> &pairs)
{
  int result; 
  const int N = pairs[0].size();
}
int main()
{
}
