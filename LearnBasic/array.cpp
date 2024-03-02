#include <iostream>
using namespace std;

void readArray() { 
    /* Array 0 index can store their memory address in any location of cpu memory 
    but 1 index memory address stored in right the postion of 0 index memory address
    --> Always in consecutive*/
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[3] +=10; 
    // add array value into 10
    arr[3]=16;
    //replace value as 16
    cout << "Value at index 3: " << arr[3]<<"\n";
}

void array_2d(){
    /*2D array 
    --> arr[3][5] is 3 rows and 5 columns */
    int arr[3][5];
    arr[0][0]=1;
    cout << arr[0][0]<<"\n";
    cout << arr[0][1]<<"\n"; // garbage value

}

void forarry(){
    int arr[5];
    cout<<"Enter array values :";
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }
    cout << "Value at index 3: " << arr[3] << endl;

}

int main() {
    //readArray();
    //array_2d();
    forarry();
    return 0;
}

