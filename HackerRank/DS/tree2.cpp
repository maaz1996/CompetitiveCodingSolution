#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }
        else
        {
            Node *cur;
            if (data <= root->data)
            {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else
            {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }
    /*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node *root)
    {
        // Write your code here.
        int leftheight, rightheight;
        if (root == NULL)
            return -1;
        else
        {
            // cout<<"hello";
            leftheight = height(root->left);
            rightheight = height(root->right);
            if (leftheight > rightheight)
                return (leftheight + 1);
            else
                return (rightheight + 1);
        }
    }

}; //End of Solution

//url: https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem