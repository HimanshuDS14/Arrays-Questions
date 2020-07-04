#include <iostream>

using namespace std;

void largest(int arr[] , int n)
{
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    if(n<3)
    {
        printf("Invalid Input..");
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second)
        {
            third = second;
            second = arr[i];

        }
        else if(arr[i] > third)
        {
            third = arr[i];
        }

    }

    cout << first << " " <<second <<" "<<third <<endl;
}


int main()
{
    int arr[] = {12,13,1,10,34,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    largest(arr,n);
    return 0;
}
