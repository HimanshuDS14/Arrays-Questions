#include <iostream>

using namespace std;

int Kadane(int arr[] , int n)
{
    int max_so_far = INT_MIN;
    int max_end = 0;

    for(int i=0;i<n;i++)
    {
        max_end+=arr[i];

        if(max_so_far < max_end)
            max_so_far = max_end;

        if(max_end < 0)
            max_end = 0;
    }
    return max_so_far;
}


int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Kadane(arr,n);

    return 0;
}
