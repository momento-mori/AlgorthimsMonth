/*
   Partition Equal Subset Sum

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

  if(sum % 2 == 0){
    int partOne, partTwo;
    for(int i = 0; i < arr.size(); i++){
      
    }
  }
  else{
    return false;
  }  
}

void partitionHelper(std::vector<int> &arr, int begin, int end)
{

} 

int main()
{

}
