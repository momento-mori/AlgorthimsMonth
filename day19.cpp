/*
    1.3.19
  107. Binary Tree Level Order Traversal 2
  Given a binary tree, return the bottom-up level order traversal.
  - From left to right level by level from leaf to root.  
    
    Input
  [3 9 20 null null 15 7]
    Output
  [
    [15 7]
    [9 20]
    [3]
  ]
*/

#include <vector>

struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};

void traversal(std::vector<std::vector<int>> &result, TreeNode *root, std::vector<int> &order, int level)
{
  if(!root){
    return;
  }  
  
  if(level = order.size())
    result[level].push_back(order);
  
  traversal(result, root->left, order, level+1);
  order.push_back(root->val);
  traversal(result, root->right, order, level+1); 
}

std::vector<std::vector<int>> levelOrderBottom(TreeNode *root){
  std::vector<std::vector<int>> result;
  std::vector<int> order;
  traversal(result, root, order, 0);
  return result;
}
