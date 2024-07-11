#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    // Custom comparator for priority queue
    bool operator<(const Student &other) const
    {
        // Compare by marks first, if marks are equal compare by roll number
        if (marks != other.marks)
        {
            return marks < other.marks;
        }
        return roll > other.roll;
    }
};

int main()
{
    int n;
    cin >> n; // Read the number of students

    priority_queue<Student> pq; // Max-heap priority queue for students

    // Read the initial students and insert them into the priority queue
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push({name, roll, marks});
    }

    int q;
    cin >> q; // Read the number of queries

    while (q--)
    {
        int type;
        cin >> type; // Read the type of query

        if (type == 0)
        {
            // Insert a new student and print the top student
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push({name, roll, marks});
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (type == 1)
        {
            // Print the top student without inserting
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
        else if (type == 2)
        {
            // Remove the top student and print the new top student
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
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
            }
        }
    }
    return 0;
}
