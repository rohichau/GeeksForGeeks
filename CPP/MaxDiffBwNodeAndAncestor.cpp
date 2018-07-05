
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/* Your are required to 
complete this method*/
int helperUtil(Node* root,int* res)
{
   if (root==NULL)
        return INT_MAX;
        
    if (root->left==NULL && root->right==NULL)
        return root->data;
        
     int minval = min(helperUtil(root->left,res),helperUtil(root->right,res));
     *res = max(*res,root->data - minval);
     return min(minval,root->data);
}

int maxDiff(Node* root)
/*{
    queue<Node*> q;
    q.push(root);
    Node* maxNode;
    int max = INT_MIN;
    maxNode = root;
    while(!q.empty())
    {
        Node* temp = q.front();
        Node*tempmax;
        q.pop();
        if (temp->left)
        {    
            q.push(temp->left);
        //    printf("1st %d\n",abs(maxNode->data - temp->left->data));
        //    printf("2nd %d\n",abs(temp->data - temp->left->data));
            if ( temp->left->data - maxNode->data >max)
            {
            //    maxNode = temp;
           //     tempmax = maxNode;
                max = temp->left->data - maxNode->data;
            }
            if ( temp->left->data - temp->data>max)
            {
        //        maxNode = temp;
                tempmax = temp;
                max = temp->left->data - temp->data;
            }
        }
        if (temp->right)
        {    
            q.push(temp->right);
        //    printf("3rd %d\n",abs(maxNode->data - temp->right->data));
        //    printf("4th %d\n",abs(temp->data - temp->right->data));
            if (temp->right->data - maxNode->data >max)
            {
            //    maxNode = temp;
            //    tempmax = maxNode;
                max = temp->right->data - maxNode->data;
            }
            if ( temp->right->data - temp->data>max)
            {
           //     maxNode = temp;
                tempmax = temp;
                max = temp->right->data - temp->data;
            }
        }
        maxNode = tempmax;
    }
    
    return max;
}*/
{
     int diff = INT_MIN;
     helperUtil(root,&diff);
     return diff;
}