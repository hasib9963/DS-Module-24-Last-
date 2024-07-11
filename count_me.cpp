#include <bits/stdc++.h> // Includes all standard libraries for convenience
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    cin.ignore(); // Ignore the newline character after reading t
    
    while (t--) {
        string s;
        getline(cin, s); // Read the entire line of text
        
        stringstream ss(s); // Create a stringstream object for parsing the line
        string word;
        unordered_map<string, int> mw; // Unordered map to store word frequencies
        int maxWord = 0; // Variable to keep track of the maximum frequency
        string ans = ""; // Variable to store the most frequent word
        
        while (ss >> word) { // Read each word from the stringstream
            mw[word]++; // Increment the word count in the map
            
            // Update the most frequent word if the current word's frequency is higher
            if (mw[word] > maxWord) {
                maxWord = mw[word];
                ans = word;
            }
        }
        
        // Print the most frequent word and its frequency
        cout << ans << " " << maxWord << endl;
    }
    return 0; // Return 0 to indicate successful execution
}
