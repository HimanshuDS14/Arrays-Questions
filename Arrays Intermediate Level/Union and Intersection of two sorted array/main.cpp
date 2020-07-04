#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void findUnion(int arr1[] , int arr2[] , int n1, int n2)
{
    set<int>s;
    for(int i=0;i<n1;i++)
    {
        s.insert(arr1[i]);

    }

    for(int i=0;i<n2;i++)
    {
        s.insert(arr2[i]);
    }

    for(set<int> ::iterator it = s.begin(); it!=s.end();it++)
    {
        cout << *it <<" ";
    }
}

void findIntersection(int arr1[] , int arr2[] , int n1 , int n2)
{
    set<int>s;
    for(int i=0;i<n1;i++)
    {
        s.insert(arr1[i]);
    }

    for(int i=0;i<n2;i++)
    {
        if(s.find(arr2[i]) != s.end())
        {
            cout << arr2[i] <<" ";
        }
    }
}


int main()
{
     int arr1[] = {7,1,5,2,3,6};
     int arr2[] = {3,8,6,20,7};
     int n1 = sizeof(arr1) / sizeof(arr1[0]);
     int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Union is : \n";
     findUnion(arr1,arr2,n1,n2);
     cout <<"\n Intersection is : \n";
     findIntersection(arr1,arr2,n1,n2);
    return 0;
}
