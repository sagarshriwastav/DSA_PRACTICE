#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};
Node *buildTree(Node *root)
{
    cout << "enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
        return nullptr;

    cout << "enter data for inserting in left " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter data for inserting in right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return ;
}
void inorder(Node* root){
    if(root==NULL)
    return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root){
    if(root==NULL)
    return ;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root==NULL)
    return ;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "printing the level order traversal output " << endl;
    levelOrderTraversal(root);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}