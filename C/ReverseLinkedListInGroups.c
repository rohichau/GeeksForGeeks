
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Reverse a linked list
  The input list will have at least one element  
  Return pointer to head of reverse linked list 
  Node is defined as 
  struct node
  {
     int data;
     struct Node *next;
  }
*/
struct node *reverse (struct node *head, int k)
{ 
    struct node* curr = head;
    struct node* temp = NULL;
    struct node* prev = NULL;
    int count = 0;   
     
    while (curr != NULL && count < k)
    {
        temp  = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        count++;
    }
     
    if (temp !=  NULL)
       head->next = reverse(temp, k); 
 
    return prev;
}
