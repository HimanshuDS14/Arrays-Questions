#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void First(int arr[] ,int n)
{
    int min =-1;
    set<int>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.find(arr[i]) != s.end())
        {
            min = i;
        }
        else
        {
            s.insert(arr[i]);
        }

    }

    if(min != -1)
    {
        cout << "First Repeating Element is  : " << arr[min] <<endl;
    }
    else
    {
        cout << "There are No repeating Element ";
    }
}


int main()
{
    int arr[] = {10,5,3,4,3,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    First(arr,n);
    return 0;
}
