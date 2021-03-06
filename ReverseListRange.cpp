/*  12.18.18
  92.Reverse Linkedlist from position m to n in one pass

*/
/*
    Approach: Again the sliding window might work. Kinda sucky it the window
    is entire list though. Maybe solve this case first..

    How to reverse linked list in one pass?
    Think of head pointer and tail pointer as m and in. 
    Now if I use some number of trailing and leading pointers I can reverse 
    order in which the list is linked.

    Questions: Are we guarenteed m & n will be within list range

    Was correct to think I just need 3 pointers to do all the reversing.
    One on node m-1, m and n. Then loop pointer on m to n; n to m-1; m-1 to n;
    Do that m-n times and you will have a reversed list at end.

    Note again sentinle node is needed. This I think is to ensure we always 
    have an m-1 node in our list. Which is needed for the solution.
*/
#include <iostream>

struct ListNode{
  int val; 
  ListNode *next; 
  ListNode(int v) : val(v), next(NULL) { }
};

ListNode *ReverseList(ListNode *head, int n, int m)
{

  if(m > n) std::cout << " M must be less than N!" << std::endl; 
  ListNode *new_head = new ListNode(-1);
  new_head->next = head;
  
  ListNode *start = new_head;
  for(int i = 0; i < m-1; i++){
    start = start->next;
  }  
  
  ListNode *current = start->next;
  for(int i = 0; i < n - m; i++){
    ListNode *move = current->next;
    current->next = move->next; 
    move->next = start->next
    start->next = move;
  }
  return new_head->next;
}

int main()
{

}

/*
     Analysis:
  * Misunderstood the nodes needed. Need refrences to nodes: m, m+1, n NOT m-1
  * Also screwed up how I created the seninle node. Need to attach a 'new_head'
    pointer to the sentinle node being created. This is so you can assign 
    'new_head' to the 'start' pointer which will be moved to m before executing
    the algorthim.
  * Also the sentinle node is needs to be created on the heap or the compiler
    yells at me. Not sure why thats the case? Note I try to assign it to a 
    pointer immeditatly after creation. Don't return it out of this functions 
    stack tho??
	Yeah my thinking was correct there is no reason to declare sentinle on
	the heap. But that means you need to assign sentinle by reference to 
	'start' pointer.

*/
