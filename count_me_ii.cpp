#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // Read the number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Read the number of elements in the array
        int a[n];

        // Read the elements of the array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n); // Sort the array

        int maxV = 0;     // Variable to store the most frequent value
        int minV = a[0];  // Variable to store the minimum value with the highest frequency
        int count = 1;    // Count of the current element
        int maxCount = 1; // Maximum frequency encountered so far

        // Iterate through the sorted array to count frequencies
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                count++; // Increment count if the current element is the same as the previous one
            }
            else
            {
                // If the current element is different, update the most frequent element if needed
                if (count > maxCount)
                {
                    maxCount = count;
                    minV = a[i - 1];
                }
                else if (count == maxCount)
                {
                    minV = max(minV, a[i - 1]);
                }
                count = 1; // Reset the count for the new element
            }
        }

        // Final check for the last element in the array
        if (count > maxCount)
        {
            maxCount = count;
            minV = a[n - 1];
        }
        else if (count == maxCount)
        {
            minV = max(minV, a[n - 1]);
        }

        // Print the most frequent element and its frequency
        cout << minV << " " << maxCount << endl;
    }
    return 0; // Return 0 to indicate successful execution
}
