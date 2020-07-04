#include <iostream>

using namespace std;

int smallest(int arr[] , int n , int k)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[k-1];
}

int main()
{
    int arr[] = {23,4,1,3,34,56,2,34,11};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k= 3;
    cout << smallest(arr , n , k);

    return 0;
}
