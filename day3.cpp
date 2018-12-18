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
    
  }
}

int main()
{

}
