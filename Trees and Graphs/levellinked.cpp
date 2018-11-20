#include <iostream>
#include <list>

using namespace std;
struct Node{

Node *left;
Node *right;
int data;
Node(int d)
{
  left = NULL;
  right = NULL;
  data =d;
} 
};
class Binary_Tree{

Node *root;
list<list<Node*> > level(Node*);
public:
Binary_Tree()
{
   root = NULL;
} 

  void insert(int element);
  list<list<Node*> > level();

};
void Binary_Tree::insert(int ele)
{
 Node *node = new Node(ele); 
  if (root == NULL)
  {
    root = node;
    return;
  }
  Node* temp = root;
  while(temp != NULL)
  {
    if (ele > temp->data)
    {
      if(temp->right != NULL)
         temp = temp->right;
      else
      { 
        temp->right = node;
        return;
      }
    } 
   else
   {
      if(temp->left != NULL)
        temp = temp->left;
      else
       {
         temp->left = node;
         return;
       }
   }
  }  
}
list<list<Node*> > Binary_Tree::level()
{
   return level(root);
}
list<list<Node*> > Binary_Tree::level(Node* node)
{
   list<Node*> current,parent;
   list<list<Node*> > result;

   list<Node*>::iterator itr;
   if (node != NULL)
   current.push_back(node);

   while(current.size() > 0)
   {
    result.push_back(current);
    parent = current;

    current.clear();
    itr = parent.begin();
    while(itr != parent.end())
    {
     if((*itr)->left != NULL)
      current.push_back((*itr)->left);

     if((*itr)->right != NULL)
       current.push_back((*itr)->right);

        itr++;
   }

}
return result;
}

int main()
{
list<list<Node*> >l;
list<list<Node*> >::iterator itr;
list<Node*>::iterator itr1;

Binary_Tree bt;
bt.insert(3);
bt.insert(2);
bt.insert(4);
bt.insert(1);
bt.insert(5);
l=bt.level();

itr = l.begin();
while(itr != l.end())
{

 itr1 = (*itr).begin();
 while(itr1 != (*itr).end())
 {
     cout<<(*itr1)->data<<" ";
     itr1++; 
 }
 cout<<endl;
 itr++;

} 

return 0;
}