#include <iostream>

using namespace std;

void movenegative(int arr[] , int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < 0)
        {
            if(i != j)
            {
                swap(arr[i] , arr[j]);
            }
            j++;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<" ";
    }
}

int main()
{
    int arr[] = {-1,3,3,-4,21,91};
    int n = sizeof(arr) / sizeof(arr[0]);

    movenegative(arr , n);
    return 0;
}
