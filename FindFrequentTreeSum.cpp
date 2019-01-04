/*
    1.4.19
  508. Most Frequent Subtree Sum 
*/


struct TreeNode{
  int val;
  TreeNode *left; 
  TreeNode *right;
  TreeNode(int v) : val(v), left(NULL), right(NULL) { }
};


#include <vector>
#include <unordered_map>

void postOrder(TreeNode *root){
  if(!root)
    return;
  postOrder(root->left);
  postOrder(root->right);
  //process value in root->val however u need to.  
}

int treeSum(TreeNode *root, std::unordered_map<int, int> &freq, int &maxSum){
  if(!root)
    return 0;
 
  sum = root->val + treeSum(root->left, freq, maxSum) + treeSum(root->right, freq, maxSum);
/*  auto itr = freq.find(sum);
  if(itr != freq.end()){
    freq.insert(make_pair(sum, 0)); 
    return sum;  
  }
  else{//this sum has already been found
    itr->second++;
    maxCount = max(maxCount, freq[sum]);
    return sum;
  } 
*/
  ++freq[sum];
  maxSum = max(maxSum, freq[sum]);
  return sum;
  
}  


std::vector<int> findFrequentTreeSum(TreeNode *root)
{
  int maxSum = 0;
  std::vector<int> sums;
  std::unordered_map<int, int> frequency;
  treeSum(TreeNode *root, frequency, maxSum); 
  int s = -1;

  //for(auto it = frequency.begin(); it != frequency.end(); ++it){
  for(const auto & f : frequency){ //actually this works and is cleaner
    if(it.second == maxSum) sums.push_back(it.first);//used . instead of -> 
  }
  return sums;
}

int main()
{
}
