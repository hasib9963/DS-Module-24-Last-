#include <bits/stdc++.h>
using namespace std;

// Function to sort an array in descending order and remove duplicates
void sortArray(vector<int> &arr)
{
    // Sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());

    // Remove duplicates from the sorted array
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    // Output the sorted and unique array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t; // Input the number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Input the number of elements in the current test case

        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i]; // Input the elements of the array
        }

        // Sort the array and remove duplicates
        sortArray(A);
    }

    return 0;
}
