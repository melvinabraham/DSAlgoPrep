#include <iostream>

using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;
};


struct ListNode
{
    int data;
    ListNode* next;
};


TreeNode* getNode(int data)
{
    TreeNode* newNode = new TreeNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right= NULL;
}

int getHeight(TreeNode* root)
{
    if(root == NULL)
        return 0;
    int l = getHeight(root->left);
    int r = getHeight(root->right);

    if(l>r)
        return l+1;
    else
        return r+1;
}
void createList(TreeNode* root,int level,ListNode** ll)
{
        if(root==NULL)
            return;
        if(level>0)
        {
            createList(root->left,level-1,ll);
            createList(root->right,level-1,ll);
        }
        else
        {
                ListNode* temp = new ListNode();
                temp->data = root->data;
                temp->next = NULL;
                if(*ll == NULL)
                {
                    *ll = temp;
                }
                else
                {
                    ListNode* temp1= *ll;
                    while(temp1->next!=NULL)
                    {
                        temp1=temp1->next;
                    }
                    temp1->next = temp;
                }
        }
}


void printList(ListNode* root)
{
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root = root->next;
    }
}
int main()
{
    TreeNode* root = getNode(1);
    root->left = getNode(2);
    root->right= getNode(3);
    root->left->left = getNode(4);
    root->left->right = getNode(5);
    root->right->left = getNode(6);
    root->right->right= getNode(7);

    int height = getHeight(root);
    ListNode* ll[height];
    for(int i=0;i<height;i++)
    {
        ll[i] = NULL;
        createList(root,i,&ll[i]);
    }

    for(int i=0;i<height;i++)
    {
        printList(ll[i]);
        cout<<endl;
    }
    return 0;
}