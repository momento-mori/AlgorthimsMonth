/*Given two singly linked lists. 
  Return sorted list of both lists.
*/

/*
  Approach: 
  Questions: Will numbers be sorted within provided lists.
  	     
*/

#include <iostream>
#include <cstidlib>

struct ListNode{
  int val;
  ListNode *next;
  ListNode(int v) : val(v), next(NULL) { }
};

ListNode *mergeLists(ListNode *l1, ListNode *l2)
{
  ListNode *result;
  while(l1 && l2){
    if(l1-val <= l2->val){
      result->next = l1;
      l1 = l1->next;
    }
    else{
      result->next = l2;
      l2 = l2->next;
    }
  }

  while(l1){
    result->next = l1;
    l1 = l1->next;
  }

  while(l2){
    result->next = l2; 
    l2 = l2->next
  }
  return result;
}

int main()
{
  ListNode *l1;
  ListNode *l2;

}

/*-----------------------------------------------------------------------------

-----------------------------------------------------------------------------*/
