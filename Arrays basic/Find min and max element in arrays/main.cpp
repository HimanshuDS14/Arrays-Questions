#include <iostream>

using namespace std;

int main()
{
    int arr[] = {23,56,23,-1,99,67,33};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min=0,max=0;

    for(int i=0;i<n;i++)
    {
        if(min ==0 && max ==0)
        {
            min = arr[i];
            max = arr[i];
        }
        else
        {
            if(arr[i]<min)
            {
                min = arr[i];

            }
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
    }

    cout << "Min Element is  :  "<<min <<endl;
    cout << "Max Element is : " << max <<endl;
    return 0;
}
