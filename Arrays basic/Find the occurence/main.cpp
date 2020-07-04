#include <iostream>

using namespace std;

int occurence(int arr[] , int n , int k)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == k)
        {
            c+=1;
        }

    }
    return c;
}


int main()
{

    int arr[] = {1,2,3,3,3,3,5,3,4,3,3,5,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << occurence(arr , n , 3);

    return 0;
}
