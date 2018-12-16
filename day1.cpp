/*Given sorted two singly linked lists. 
  Return sorted list of both lists merged.

	Input
    [ 1 2 4]  [ 1 3 4]
	Ouput
    [1 1 2 3 4 4]
  
  * Attempt 1 Output:
      [1 4]
------------------------------------------------------------------------------*/
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
  ListNode sentinel(0)
  result = &sentinel;

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

  result->next = l1 ? l1 : l2;
  return sentinel.next;
}

int main()
{
  ListNode *l1;
  ListNode *l2;

}

/*-----------------------------------------------------------------------------
  Reflections:

  Orginal approach was correct. Didn't grasp concept of needing a sentinle head 
  node in the list we will merge into. Needed cause if you just have pointer and  you try to access it through *next you lose nodes you connected in the last 
  iteration.

  The ternary operation was exactly right. 

  Only gotch is you have to return the resulitng merged node wihtout the 
  sentinle.
-----------------------------------------------------------------------------*/
