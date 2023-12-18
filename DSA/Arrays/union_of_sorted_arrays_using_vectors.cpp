#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr1[] = {1, 1, 2, 3, 4, 5};
    int arr2[] = {2, 2, 3, 4, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int i, j;
    i = j = 0;
    vector<int> ans;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            if (ans.size() == 0 || ans.back() != arr1[i])
            {
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            if (ans.size() == 0 || ans.back() != arr2[j])
            {
                ans.push_back(arr2[j]);
            }
            j++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != arr1[i])
            {
                ans.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    while (j < n2)
    {
        if (ans.size() == 0 || ans.back() != arr2[j])
        {
            ans.push_back(arr2[j]);
        }
        j++;
    }

    while (i < n1)
    {
        if (ans.size() == 0 || ans.back() != arr1[i])
        {
            ans.push_back(arr1[i]);
        }
        i++;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
