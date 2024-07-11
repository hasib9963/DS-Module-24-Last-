#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;                                          // Read the number of initial elements
    priority_queue<int, vector<int>, greater<int>> pq; // Min-heap priority queue

    // Read the initial elements and insert them into the priority queue
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int q;
    cin >> q; // Read the number of queries

    while (q--)
    {
        int type;
        cin >> type; // Read the type of query

        if (type == 0)
        {
            // Insert an element and print the smallest element
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (type == 1)
        {
            // Print the smallest element without inserting
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if (type == 2)
        {
            // Remove the smallest element and print the new smallest element
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << pq.top() << endl;
                }
            }
        }
    }
    return 0;
}
