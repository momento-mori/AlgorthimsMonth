/*
    94. Binary Tree Inorder Traversal
  Given a binary tree, return the inorder traversal of its nodes value.
*/

#include <iostream>
#include <vector>

void helper(TreeNode *root, std::vector<int> &result)
{
  if(root){
    helper(root->left, result);
    result.push_back(root->val);
    helper(root->right, result);  
  }
  
}

std::vector<int> inorderTraversal(TreeNode *root)
{
  std::vector<int> result;
  helper(root, result);
  return resutl;
}

int main()
{
}

/*
  Recall Inorder traversal is a recusive with the data processing between the 
  two recurisve calls to the left and right subtrees.
    So in this case instead of printing inorder we push_back into a vector.
*/
