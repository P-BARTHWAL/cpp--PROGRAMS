#include <bits/stdc++.h>
using namespace std;
void count(int n , int i=0) {
    if (i>n) {
        return ; }
    else {
         cout << i << "\n";
         count(n,i+1);
    }
    }

int main() {
    int a ;
    cout << "Enter the number up to which you want to count: ";
    cin >> a;
    count(a);
    return 0;
}