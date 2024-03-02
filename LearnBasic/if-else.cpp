#include <iostream>
using namespace std ;

void if_else(){
    int age;
    cout << "Enter the age :";
    cin >> age;
    if(age<=18){

        cout<<"Not An Adult"<<"\n";
    }
    else{                       //else statement not manditory 
        cout<<"Adult"<<"\n"; 
    }
}
void grade(){
        int mark;
    cout << "Entre the  your mark :";
    cin >> mark;

    if(mark<=25){
        cout<<"Your grade is F"<<"\n";
    }
    else if(mark<=44 && mark>=25){
        cout<<"Your grade is E"<<"\n";
    }
    else if(mark<=49 && mark>=45){
        cout<<"Your grade is D"<<"\n";
    }
    else if(mark<= 59 && mark>=50){
        cout<<"Your grade is C"<<"\n";
    }
    else if(mark<= 79 && mark>=60){
        cout<<"Your grade is B"<<"\n";
    }
    else if(mark<=100 && mark>=80){
        cout<<"Your grade is A"<<"\n";
    }
    else{
        cout<<"invalid";
    }
}

void job(){
    int age;
    cout<<"Enter the age :";
    cin >> age;
    if(age<18){
        cout<<"you are not eligble"<<"\n";
    }
    else if(age <=57){
         cout<<"you are eligble";
         if (age>=55){
            cout<<", Retirement soon"<<"\n";
         }
    }
    else if(age>57&&age<100){
        cout<<"Retirement Time "<<"\n";
    }
    else{
        cout<<"Invalid"<<"\n";
    }
}

int main(){
    //if_else();
    //grade();
    job();
    return 0;
}