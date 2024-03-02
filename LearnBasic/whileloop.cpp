#include <iostream>
using namespace std;

void loop(){
    int i=0;
    while(i<5){
        cout<<"naveen"<<"\n";
        i++;
    }
}

void doloop(){
    int i=0;
    /*The do/while loop is a variant of the while loop. 
    This loop will execute the code block once, before checking 
    if the condition is true, 
    then it will repeat the loop as long as the condition is true.*/
    do{         
        cout<<"naveen"<<i<<"\n";
        i=i+1;
    }while(i<=3);

    cout<<i<<"\n";
}


int main(){
    doloop();
    //loop();
    return 0;

}