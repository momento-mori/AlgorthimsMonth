/* 
  78. Subsets

  Given a distinct set of integrs, return all possible subsets.

  Note: Solution must not contain duplicate subsets.

  
*/

#include <iostream>
#include <vector>

void backTracking(std::vector<std::vector<int> > & result, std::vector<int> &nums, int vertex, std::vector<int> &subset)
{
  if(vertex == nums.size(){
    result.push_back(subset);
  }
  else{
    backTracking(result, nums, vertex+1, subset);
    subset.push_back(nums[sz]);
    backTracking(result, nums, vertex+1, subset);
    subset.pop_back();  
  }
}

std::vector<std::vector<int>> subsets(std::vector<int> &nums)
{
  std::vector<std::vector<int>> result;
  std::vector<int> subset;
  backTrackinn(result, nums, 0, subset);
  return result;
}

int main()
{
}

/* 
    Approach:
  Was a little lost on which alogrthm to use but I definelty recognized that
  recusion was the correct apporach.

  The algorithm I was looking for is a basic idea.
    - Backtracking which generates all possible solutions recursively.
   This is done by pushing every index of the given array of numbers then
   Adding one to the starting vertex (0) and recursing. 
    * To avoid the duplicate solutions though I need to pop_back()
  The element I pushed back as I climb up the recursion tree.
  If the vertex count which started at 0 is equal to the size of the 
  given array then you add that result to your result vector.

*/
