#include <iostream>

using namespace std;

void pairs(int arr[] , int n , int sum)
{
    int c= 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j] == sum)
            {
                cout << "Pair is : " << arr[i] << " + " << arr[j] <<" = " << sum << endl;
                c++;
            }
        }
    }
    cout << "Total Number of Pairs : "<< c;
}

int main()
{
    int arr[] = {1,5,7,-1,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;

    pairs(arr,n,sum);

    return 0;
}
