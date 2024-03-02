#include <iostream>
#include <string>
using namespace std;

void stringmanipulation(){
    string s= "naveen";
    int len=s.size();
    cout <<len<<"\n";

}
void forstring(){
    string s1= "naveen";
    for(int i=0;  i<s1.length(); i++){
        cout<<s1[i]<<"\n";
    }
}

int main(){
    //stringmanipulation();
    forstring();
    return 0;
}