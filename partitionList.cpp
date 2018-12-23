/*  Partition List*/

/*
   Orginal Plan was great one pass but totally bungled the intialization of
   gt and lt lists I was using to partion and also messed up that once I had
   the lists partitioned all I had to do was make sure I attached last node of 
   lt list to first node of gt AFTER making sure we skip the dummy node at the
   front of that list.

   HOW TO INITALIZE DUMMY NODES FOR LIST!
    Way one: 
     ListNode node1(-1), node2(-1);
     ListNode *p1 = &node1, *p2 = &node2;

    Way two:
      ListNode *p1 = new ListNode(-1);
      ListNode *p2 = new ListNode(-1);
*/

ListNode *partition(ListNode *head,  int x)
{
  ListNode node1(-1), node2(-1);
  ListNode *lt = &node1, *gt = &node2;
  while(head){
    if(head->val < x){
      lt->next = head;
      lt = lt->next;
    }
    else{
      gt->next = head;
      gt = gt->next;
    }
  }
  gt->next = NULL;
  lt->next = node2.next;
  return node1.next;
}

int main()
{

}
