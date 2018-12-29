/*
   416. Partition Equal Subset Sum

   Given non empty array w only positve integers.

   Input:
     [1 5 11 5]
   Output:
     true
   Explanation:
     Array can be partitioned as [1 5 5] and [11]


  Input:
    [1 2 3 5]
  Output:
    false
  Explanation:
    Can't be equaly partitioned into 2 groups.  

*/

#include <iostream>
#include <vector>

bool canPartition(std::vector<int> &arr)
{
  int sum = 0;
  for(const auto &K : arr){
    sum += K;
  }
  //int sum = accumulate(arr.begin(), arr.end(), 0);
  

} 

int main()
{

}

/*
  So break problem down. To split into two sub arrays given an integer array
    You need to have what be true?
      There needs to be even sum of intgers in given array
      No element can be greater than half the value of the sum.
*/
