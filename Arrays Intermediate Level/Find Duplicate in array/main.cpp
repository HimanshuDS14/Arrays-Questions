#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int duplicate(int arr[] , int n)
{
    vector<bool> visited(n,0);

    for(int i=0;i<n;i++)
    {
        if(visited[arr[i]])
            return arr[i];
        visited[arr[i]] = true;
    }

    return -1;

}

int main()
{
    int arr[] = {1,2,3,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);
     cout <<  duplicate(arr,n);


    return 0;
}
