#include<iostream>
using namespace std;

int main(){
    int x = 1;
    int e = 0, o = 0;
    while ( x != 0){
        cout << "Enter an integer: ";
        cin >> x;
        if ( x%2 == 0 and x != 0 ){
            e = e+1;
        }else if( x%2 != 0){
            o = o+1;
        }
    }
    cout << "#Even numbers = "<< e << endl;
    cout << "#Odd numbers = "<< o << endl;
    return 0;
}