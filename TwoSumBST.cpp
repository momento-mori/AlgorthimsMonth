/*  12.29.2018

    653. Two Sum 4 - Input is BST
  Given a Binary Search Tree and a target number, return true if there exist
  two elements in the BST such that their sum is equal to the given target.
  
    Approach:
  Insert each value in tree into hash map thats passed to helper function.
*/

#include <iostream>
#include <map>
struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreenNode(int x) : val(x), left(NULL), right(NULL) {}
};


bool helper(TreeNode *root, int target, std::unoredered_set<int> &sett)
{
  
  if(!root)
    return false;
  
  //int complement = root->val - target; /***   Again with the carless shit   **/
  int complement = target - root->val; // this can also happen direct in .find(..) 
  //if(mapp.find(complement) != mapp.end()){
  if(sett.count(complement)){
    return true; 
  }
  //else{
    unordered_set.insert(root->value); 
    //helper(root->left, target, sett) && helper(root->right, target, sett);  **BEWARE BUGS***
    //helper(root->left, target, sett) || helper(root->right, target, sett);
    return helper(root->left, target, sett) || helper(root->right, target, sett);
  //}
}

bool findTarget(TreeNode *root, int k)
{

  // Don't do this stupid shit without reason from now on.
  /*if(root->val == k)
    return true;*/
  std::unordered_set<int> sett; // O(N^2)
  return helper(root, k, sett);

}

int main()
{
}

/*
  ***std::map<class T> is a SORTED container that only allows UNIQUE keys.
  If you want to have not unique keys then you need unordered map

  
*/

