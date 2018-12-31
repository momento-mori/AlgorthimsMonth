/* 12.30.2018
  235. Lowest Common Ancestor of BST
    Given BST find lowest common ancestor of 2 given nodes in BST.
      Nodes are different values and guarenteed to exist in the tree.
  
  Input:
    root = [6 2 8 0 4 7 9 null null 3 5] p = 2, q = 8
  Ouput:
    6
  Explanation:
    The LCA of 2 and 8 is 6.
*/

struct TreeNode{
  int val;
  TreeNode *right;
  TreeNode *left;
  TreeNode(int x) : val(x) , right(NULL), left(NULL) {} 
};

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *q, TreeNode p)
{
  if(root->val > p->val && root->val > q->root)
    return lowestCommonAncestor(root->left, q, p);
  else if(root->val < p->val && root->val < q->root)
    return lowestCommonAncestor(root->right, q, p);
  else 
    return(root, p, q);
}

int main()
{
}
