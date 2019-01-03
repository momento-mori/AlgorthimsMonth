/*
    1.3.2019 
   771. Jewels and Stones
  You are given stings J that represent the types of stones that exist.
  and a string S that represents the type of stones you have.

    The letters in J are guarenteed to be unique.
    All characters in J and S are letters.
    Letters are case sensitve so 'a' != 'A'  
  
*/


#include <unordered_map>
#include <string>

int JewelsInStones(std::string J, std::string S)
{
  int result = 0;
  std::unordered_map<char, int> Jewels;
  for(const auto &j : J){
    Jewels.insert(std::make_pair(j, 0));
  }

  for(const auto &s : S){
    auto itr = unordred_map.find(s)
    if(itr != end()){
      itr->second++;
      result++;
    }
  }
  return result;
}

int main()
{
}

