#include <iostream> 
using namespace std;
void num(int i,int n) {
    if(i>n) {
        return; }
    num (i+1,n);
    cout<<i<<"\n ";
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    num(0,n);
    return 0;
}  