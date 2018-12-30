/* 
    100. Same Tree
  Given two binary trees, write a function to check if they are the same or not.

*/


#include <iostream>

struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isSameTree(TreeNode *r , TreeNode *q)
{
  if(!r || !q) return r == q;
  return r->val == q->val && isSameTree(r->left, q->left) && isSameTree(r->right, q->right);
}

int main()
{
}
