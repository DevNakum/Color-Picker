// #include<bits/stdc++.h>
// using namespace std;

// class node
// {
//     public:
//     int data;
//     node* left;
//     node* right;

//     node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// void printLevelOrder(node* root)
// {
//     if(root==NULL)
//         return;
    
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         node* temp = q.front();
//         q.pop();
//         if(temp!=NULL)
//         {
//             cout<<temp->data<<" ";
//             if(temp->left)
//                 q.push(temp->left);
//             if(temp->right)
//                 q.push(temp->right); 
//         }
//         else if(!q.empty())
//             q.push(NULL);        
//     }
// }

// int main()
// {
    // node* root = new node(1);
    // root->left = new node(2);   
    // root->right = new node(3);   
    // root->left->left = new node(4);   
    // root->left->right = new node(5);   
    // root->right->left = new node(6);   
    // root->right->right = new node(7);   

//     printLevelOrder(root);
//     return 0;
// }


// Sum at kth level
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int sumAtK(node* root,int K)
{
    if(root==NULL)
        return -1;
    
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    int level=0,sum=0;
    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp!=NULL)
        {
            if(level==K)
                sum+=temp->data;
            
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);   
        }
        else if(!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);   
    root->right = new node(3);   
    root->left->left = new node(4);   
    root->left->right = new node(5);   
    root->right->left = new node(6);   
    root->right->right = new node(7); 

    cout<<sumAtK(root,2);
    return 0;
}