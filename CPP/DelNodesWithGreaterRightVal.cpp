
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of linked list is the following
struct Node
{
int data;
Node* next;
};
*/
Node *compute(Node *head)
{
    if (head->next == NULL)
        return head;
    
    Node* temp = compute(head->next);
    if (temp->data > head->data)
    {
        return temp;
    }
    else
    {
        head->next = temp;
        return head;
    }
}