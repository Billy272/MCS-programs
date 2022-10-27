#include <iostream>
#include <cstdlib>

using namespace std;
struct node
{
    int info;
    struct node*left;
    struct node*right;
}*root;
class BST
{
    public:
        void find(int,node**,node**);
        void insert(node*tree,node*newnode);
        void del(int);
        void case_a(node*,node*);
        void case_b(node*,node*);
        void case_c(node*,node*);
        void preorder(node*);
        void inorder(node*);
        void postorder(node*);
        void display(node*, int);
        BST()
        {
            root=NULL;
        }
};

int main()
{
    int choice,num;
    BST bst;
    node*temp;
    while(1)
    {
        cout<<"----------"<<endl;
        cout<<"Operation on BST"<<endl;
        cout<<"---------"<<endl;
        cout<<"1.Insert Element"<<endl;
        cout<<"2.Delete Element"<<endl;
        cout<<"3.Inoder Traversal"<<endl;
        cout<<"4.Preorder Traversal"<<endl;
        cout<<"5.Postorder Traversal"<<endl;
        cout<<"6.Display"<<endl;
        cout<<"7.Quit"<<endl;
        cout<<"Enter your choice: ";

        cin>>choice;
        switch(choice)
        {
          case 1:

            temp = new node;
            cout<<"Enter the number to be inserted: ";
                cin>>temp->info;
            bst.insert(root, temp);break;

          case 2:

            if(root==NULL)
            {
                cout<<"Tree is empty,nothing to delete"<<endl;
                continue;
            }  
            cout<<"Enter the number to be deleted: ";
            cin>>num;
            bst.del(num);
            break;

          case 3:

            cout<<"Inorder Traversal of BST: "<<endl;
            bst.inorder(root);
            cout<<endl;

          break;
          case 4:

            cout<<"Preorder Traversal of BST: "<<endl;
            bst.preorder(root);
            cout<<endl;

          break;
          case 5:

            cout<<"Postorder Traversal of BST: "<<endl;
            bst.postorder(root);
            cout<<endl;

          break;
          case 6:

            cout<<"Display BST: "<<endl;
            bst.display(root, 1);
            cout<<endl;

          break;
          case 7:

            exit(1);
            default:
            cout<<"Wrong choice"<<endl;
        }
    }
}

//Find Element in the tree
void BST::find(int item, node **par,node **loc)
{
    node*ptr,*ptrsave;
    if(root==NULL)
    {
        *loc=NULL;
        *par=NULL;
        return;
    }
    if(item==root->info)
    {
        *loc=root;
        *par=NULL;
        return;
    }
    if(item < root->info)
        ptr=root->left;
    else
        ptr=root->right;
        ptrsave=root;
    while(ptr != NULL)
    {
        if(item==ptr->info)
        {
            *loc=ptr;
            *par=ptrsave;
            return;
        }
        ptrsave=ptr;
        if(item < ptr->info)
            ptr=ptr->left;
        else
            ptr=ptr->right;
    }
    *loc=NULL;
    *par=ptrsave;

}