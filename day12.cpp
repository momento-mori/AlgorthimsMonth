/*
    234. Palindrome Linked List
  Given a singly linked list, determine if its a palindrome.

    Input
  1->2
    Output
  false

    Input
  1->2->2->1
    Output
  true

    Do it in O(N) time and O(1) space.
*/

#include <iostream>

struct ListNode{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

bool isPalindrome(ListNode *head)
{
  ListNode *slow, *fast, *temp;
  slow = head;
  fast = head;
  temp = head;

  //list with 0 or 1 nodes is always palindrome
  if(!head || !head->next)
    return true;

  //if theres 2 nodes then just compare values in nodes now and return answer.
  if(!head->next->next)
    return head->val == head->next->val;

  
  int cnt = 0;
  //find the middle point list.
  while(fast->next && fast->next->next){
    fast = fast->next->next;
    slow = slow->next;
    count++;
  }
  
  //then from middle-end should be same as begining-middle to be palindrom
  //if any values are different immediately return false
  //if for loop terminates means the list is a palindrome.
  for(int i = count; i > 0; i--){
    if(temp->val != slow->val){
      return false;
    }
    slow = slow->next; 
    temp = temp->next;
  }
  
  return true;
}

int main()
{
}

/*
    Approach:
  A nice idea is to run a pointer @ 2X another pointer till it reaches the end with the 
  other slower pointer resting at the middle of the list.

  The hardest part of this problem is honestly the edge cases. For instance when the list 
  is less than 3 its false but if its equal to 0 or 1 its true. 

    Your 'nice idea' doesn't work because you didin't understand what a palindrome is.
      You can't read from front to middle and midddle to end and have the same thing.
        Its really last to first then last-1 to first+1 which is why ppl try to reverse the list.

*/
  
