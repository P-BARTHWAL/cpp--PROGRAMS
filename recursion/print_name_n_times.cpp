#include <bits/stdc++.h>
using namespace std;
void name (string n, int b, int  i=1) {
    
      if (i > b) {
            return;
      }
      else {
        cout << n << endl;
        name(n, b, i+1);
      }
}
int main ()
 { string na ;
    int a;
cout << "Enter your name full name  : "  ;
getline(cin, na);
cout << "Enter the number of times you want to print your name: "; 
cin >> a;
name (na, a );
return 0;
}