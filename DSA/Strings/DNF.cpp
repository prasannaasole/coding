#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    // the dutch national flag algorithm
    int arr[] = {0, 2, 1, 2, 1, 2, 1, 0, 0, 0, 1, 2, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low, mid, high;

    low = 0;
    mid = 1;
    high = n - 1;
     for(int i = 0; i<n; i++)
    {
       cout<<arr[i] <<" ";
    }
    cout<<endl;
    cout<<endl;
    while (mid < high)
    {
        if (arr[low] < arr[high])
        {
            if (arr[low] < arr[mid])
            {
                if (arr[mid] < arr[high])
                {
                    mid++;
                    low++;
                }
                else
                {
                    swap(arr[mid], arr[high]);
                }
            }

            else{

                swap(arr[low], arr[mid]);
                mid++;
            }
        }

        else{
            swap(arr[low], arr[high]);
        }
    }

    for(int i = 0; i<n; i++)
    {
       cout<<arr[i] <<" ";
    }
    return 0;
}