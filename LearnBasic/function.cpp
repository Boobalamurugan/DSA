#include <iostream>
using namespace std;

/*
--Function are set of code which performs for you 

*/

void printname(string name){
    cout<<"hey "<<name<<"\n";
}

int minn(int a, int b) {
    if (a >= b) {
        return b;
    }
    else {
        return a;
    }
}


//pass by reference
void dosomething(int a) {   //add int &a for original value or address change
    cout << a << "\n";    // Print the original value of a
    a = a + 10;           // Add 10 to a
    cout << a << "\n";    // Print the updated value of a
}
void passinarray(int arr[],int n){
    arr[0]=100;
    cout<<"value of inside fn :"<<arr[0]<<"\n";

}

int main(){
    string name;

    
    //cin>>name;
    //printname(name);

    int num1,num2;
    // cout<<"Entre two numbers :";
    // cin>>num1>>num2;
    // cout<<minn(num1,num2)<<"\n";

    // int a;
    // cin>>a;
    // cout << "function output :\n"; 
    // dosomething(a); 
    // cout<<"function output :" << a<< "\n"; 
    /*if we use int &a the output is change 
    other wise output nad input are same*/

    int n=5;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    passinarray(arr,n);

    cout<<"value inside int main ;"<<arr[0]<<"\n";

    return 0;
}