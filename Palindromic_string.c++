#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string S;  
    cin >> S;
    
    string P = S;
    
    // Reverse the second string
    reverse(P.begin(), P.end());
    
    // Check if the original and reversed strings are equal
    if (S == P) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
