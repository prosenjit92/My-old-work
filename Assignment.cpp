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
    while(first != NULL)
    {
    if(first->data == val)
    {
        cout << "Data " << val << " found in the binary tree" << endl;
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
    }
}



int main()
{
     int arr[10];
    cout<< "ENTER ARRAY NUMBERS : ";
    for(int i=0; i<10; ++i)
        cin>>arr[i];
    cout<< "**************************************  "<<endl;

    cout<<"The ARRAY NUMBERS :  "<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<" "<<arr[i];
    }

    Root *first = new Root();
    Root *second = new Root();
    Root *third = new Root();
    Root *fourth = new Root();

    first->data = arr[0];
    first->left = second;
    first->right = NULL;


    second->data = arr[1];
    second->left = third;
    second->right = fourth;


    third->data = arr[2];
    third->left = NULL;
    third->right = NULL;


    fourth->data = arr[3];
    fourth->left = NULL;
    fourth->right = NULL;

    int d;
    cout << "Give value to search" << endl;
    cin >> d;

    searchdata(first, d);

    return 0;

}


/*#include<iostream>
using namespace std;
class node
{
private:

    int n;
    int arr[];
public:
    int input()
    {
        int n,i;
        cout<<"Enter the size of the array : ";
        cin>>n;
        int arr[n];
        cout<<"Enter the array element : ";
        for(int i=0; i<n; i++)
        {

            cin>>arr[n];
        }
    }

    void bubble(int arr[])
    {
        {
            for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<6; j++)
                {
                    if(arr[j] < arr[i])
                    {
                        int tmp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = tmp;
                    }
                }
            }

            cout<< "Bubble Sort =>";

            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<< " ";
            }
        }

    }


};

int main()
{
    node n;
    n.input();
    n.bubble(arr);


    return 0;
}
*/
