/*  Reverse Linkedlist from position m to n in one pass

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
  ListNode sentinle(-1);
  sentinle->next = head;
  
  ListNode *start = sentinle;
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
  return sentinle->next;
}

int main()
{

}

/*
     Analysis:
  * Misunderstood the nodes needed. Need refrences to nodes: m, m+1, n NOT m-1
*/
