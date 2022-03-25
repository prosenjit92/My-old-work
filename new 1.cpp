#include<iostream>
using namespace std;

void bubble(int arr[],int  n)
{
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[j] < arr[i])
                {
                    int tmp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = tmp;
                }
            }
        }

        cout<< "Bubble Sort NUMBER =>";

        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<< " ";
        }
    }


}

void Binary_Search(int arr[],int n)
{
    for(int i=0; i<n; i++)
            {

               int index_of_min_value = i;

                for(int j=i+1; j<n; j++)
                {
                    if(arr[j] < arr[index_of_min_value])
                    {
                        index_of_min_value = j;
                    }
                }

                int tmp = arr[index_of_min_value];
                arr[index_of_min_value] = arr[i];
                arr[i] = tmp;
            }
            cout<<"Binary search => " ;


            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<< " ";
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
    cout<<endl;
    int n= sizeof(arr)/sizeof(arr[0]);

    bubble(arr,n);
    cout<<endl;
    Binary_Search(arr,n);
    return 0;
}
