
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    int lCount;
 
    Node* left;
    Node* right;
};*/
/*void ksmall(Node* root, int k,int* val)
{
    if (root == NULL)
    {
        return;
    }
    ksmall(root->left,k,val);
    if((root->lCount)+1 == k)
    {
        *val = root->data;
    }
    ksmall(root->right,k,val);
} */

int KthSmallestElement(Node *root, int k)
{
     if (root==NULL)
     {
         return 0;
     }
     if (root->lCount+1 == k)
     {
         return root->data;
     }
     if (root->lCount >= k)
     {
         return KthSmallestElement(root->left,k);
     }
     return KthSmallestElement(root->right,k-(root->lCount+1));
}

