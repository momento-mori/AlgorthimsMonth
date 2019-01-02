/*
      646. Maximum Length of Pair Chain
  Given n pairs of numbers. In every pair, the first # is always smaller
  than the second number.

      //YOU CAN TAKE PAIRS IN ANY ORDER. 
        //I didn't even note this in the problem statement but its 
        // pretty important as it tells me to sort the pairs by the
        // first element of each which guarentees no pairs are missed.

   Input:
  [[1 2] [2 3] [3 4]]
   Output:
  2

  ** Your brain should of mapped this to longest common subsequence **
    Now that was solved the only difference should be that our iterators 
    on the for loops correspond to the first pair integer and 
    the .second iterator is what we use in the max() and if(..) statements

   ** Implementation Notes  **
  To access the pairs of elements:
    pairs[i][0] < pairs[i][1]

  The problem statest

*/

#include <iostream>
#include <vector>

int findLongestChain(std::vector<std::vector<int>> &pairs)
{
  //int N = pairs[0].size(); ** NOT QUITE SURE WHY THIS IS WRONG.
  int N = pairs.size();

  //std::vector<int> result (N+1, 1); ** WHY IS INITING AT 1 WRONG?
                                        //your not guarenteed that one exists
  std::vector<int> result (N+1, 0);  
  
  sort(pairs.begin(), paris.end(), cmp);
 
  for(int i = 0; i < N; i++){
    for(int j = 0; j < i; j++){
      //if(pairs[i][1] > pairs[j][0]) **GREAT QUESTION TO ASK IS WB # THAT ARE == 
      if(pairs[i][1] >= pairs[j][0]) 
        result[i] = max(result[i], result[j]+1);
      else
        result[i] = max(result[i], result[j]);
    }
  }
  
  return result[N-1];
}

// ** COMPILER REQUIRES THIS FUNCTION TO BE STATIC. tried static_cast learn what that is.
//bool cmp(std::vector<std::vector<int>> &a, std::vector<std::vector<int>> &b) 

//static bool cmp(std::vector<std::vector<int>> &a, std::vector<std::vector<int>> &b)
//** NEEDS TO BE JUST 1D VECTOR. 

//sort on basis of first number in pairs
static bool cmp(std::vector<int> &a, std::vector<int> &b)
{
  return a[0] < b[0];
}

int main()
{
}
