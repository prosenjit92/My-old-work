/*
#include<iostream>
using namespace std;
class Root
{
public:
    int data;
    Root *left;
    Root *right;

    Root(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


int main()
{


    return 0;
}
/*
#include<iostream>
using namespace std;

class Root
{
    public:
    int data;
    Root *left;
    Root *right;
};



int main()
{
    Root *first = new Root();
    Root *second = new Root();
    Root *third = new Root();
    Root *fourth = new Root();

    first->data = 50;
    first->left = second;
    first->right = NULL;


    second->data = 30;
    second->left = third;
    second->right = fourth;


    third->data = 20;
    third->left = NULL;
    third->right = NULL;


    fourth->data = 40;
    fourth->left = NULL;
    fourth->right = NULL;

    return 0;
}
*/

#include<iostream>
using namespace std;

class Root
{
    public:
    int data;
    Root *left;
    Root *right;
};


void searchdata(Root *first, int val)
{
    int i=1;
    bool found = false;
    while(first != NULL)
    {
    if(first->data == val)
    {
        found = true;
        cout << "Data " << val << " found in the hight " << i  << endl;
        break;
    }
    else if(first->data > val)
    {
        first = first->left;
    }
    else
    {
        first = first->right;
    }
    i++;
    }
    if(!found)
    {
        cout << "Data " << val << " not found in the binary tree" << endl;
    }
}

void insertNode(Root *first, int val)
{
    Root *latest = new Root();
    latest->left = NULL;
    latest->right = NULL;

    if(first != NULL)
    {
        while(first->left != NULL || first->right != NULL)
        {
            if(first->data > val)
            {
                first = first->left;
            }
            else if(first->data < val)
            {
                first = first->right;
            }
        }
        latest->data = val;
        if(first->data > val)
            {
                first->left = latest;
            }
        else if(first->data < val)
        {
            first->right = latest;
        }
    }
    else
    {
        first->data = val;
    }

}

void inOrderPrint(Root *first)
{
    if(first == NULL)
        return;

    inOrderPrint(first->left);
    cout << first->data << " ";
    inOrderPrint(first->right);
}

int main()
{
    Root *first = new Root();
    Root *second = new Root();
    Root *third = new Root();
    Root *fourth = new Root();

    first->data = 50;
    first->left = second;
    first->right = NULL;


    second->data = 30;
    second->left = third;
    second->right = fourth;


    third->data = 20;
    third->left = NULL;
    third->right = NULL;


    fourth->data = 40;
    fourth->left = NULL;
    fourth->right = NULL;

    int d;
    cout << "\nGive value to search" << endl;
    cin >> d;

    searchdata(first, d);

    cout << "\nPrinted InOrder:" << endl;
    inOrderPrint(first);

    cout << endl;

    cout << "\nInsert new leaf value" << endl;
    int nv = 0;
    cin >> nv;

    insertNode(first, nv);

    cout << "\nPrinted InOrder:" << endl;
    inOrderPrint(first);

    cout << endl;

    return 0;

}
