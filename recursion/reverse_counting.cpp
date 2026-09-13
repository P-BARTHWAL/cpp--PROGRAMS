#include <bits/stdc++.h>
using namespace std;
void count(int n ) {
    if (n < 0) {
        return ; }
    else {
         cout << n << "\n";
         count(n-1);
    }
    }

int main() {
    int a ;
    cout << "Enter the number from which you want to start counting : ";
    cin >> a;
    count(a);
    return 0;
}