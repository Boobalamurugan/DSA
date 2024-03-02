#include <bits/stdc++.h>
using namespace std ;

void print(){
    cout << "Naveen";

}

int sum(int a, int b){
    return a+b;
}

int input(){
    int c ;
    cout << "Value of c :";
    cin >> c;
    return c;

}

int main(){
    print();
    cout << "\n";
    int s = sum(133,input());
    cout << s;
    return 0;
}