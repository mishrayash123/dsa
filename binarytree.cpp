#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *builtree(node *root)
{
    cout << "enter data " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter data for inserting left of" << data << endl;
    root->left = builtree(root->left);
    cout << "enter data for inserting right of" << data << endl;
    root->right = builtree(root->right);
    return root;
}

void levelorder(node *root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
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
}

void buildfromlevelorder(node* &root){
queue<node*>q;
cout<<"enter data for root"<<endl;
int data;
cin>>data;
root = new node(data);
q.push(root);

while(!q.empty()){
    node* temp = q.front();
    q.pop();
    cout<<"enter left node for :"<<temp->data<<endl;
    int leftdata;
    cin>>leftdata;
    if(leftdata !=-1){
        temp->left = new node(leftdata);
        q.push(temp->left);
    }

    cout<<"enter right node for :"<<endl;
    int rightdata;
    cin>>rightdata;
    if(rightdata !=-1){
        temp->right = new node(rightdata);
        q.push(temp->right);
    }
}
}

int findposition(int in[], int element, int n){
    for(int i=0;i<n;i++){
        if(in[i]== element){
            return i;
        }
    }
    return -1;
}

node* solve(int in[], int pre[], int &index, int inorderstart, int inorderend, int n){
if(index >= n || inorderstart > inorderend){
    return NULL;
}
 
 int element = pre[index++];
 node* root = new node(element);
 int position = findposition(in, element, n);

 root->left = solve(in,pre, index, inorderstart, position-1,n);
 root->right= solve(in,pre,index, position-1,inorderend,n);
 return root;
}

node* buildtreefrominandpre(int in[], int pre[], int n){
    int preorderindex=0;
    node* ans = solve(in,pre,preorderindex,0,n-1,n);
    return ans;
}

int main()
{
    node *root = NULL;
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = builtree(root);

    levelorder(root);

    return 0;
}

