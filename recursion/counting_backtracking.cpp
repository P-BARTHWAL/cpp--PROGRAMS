#include <bits/stdc++.h>
using namespace std;
void num(int i,int n) {
    if (i<0) {
        return ;}
    num (i-1,n);
    cout <<i << "\n";   
    }
int main () {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    num(n,n);
    return 0;
}
