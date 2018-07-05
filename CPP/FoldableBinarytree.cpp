
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Returns true if the given tree is foldable */

bool helper(struct node* left, struct node* right)
{
    if(left==NULL && right == NULL)
    {
        return true;
    }
    
    if (left==NULL || right==NULL)
    {
        return false;
    }
    
    return( helper(left->left,right->right) && helper(left->right,right->left));
}

bool isFoldable(struct node *root)
{
     return helper(root->left,root->right);
}