#include <iostream>
using namespace std;

void switchcase(){
    int days;
    cout << "entre the days number :";
    cin >> days;

    switch(days){
        case 1:
            cout<<"monday"<<"\n";
            break;
        case 2:
            cout<<"tuesday"<<"\n";
            break;
        case 3:
            cout<<"wednesday"<<"\n";
            break;
        case 4:
            cout<<"thursday"<<"\n";
            break;
        case 5:
            cout<<"friday"<<"\n";
            break;
        case 6:
            cout<<"saturday"<<"\n";
            break;
        case 7:
            cout<<"sunday"<<"\n";
            break;
        default:
            cout<<"invaild"<<"\n";
        cout<<"breakCheck"<<"\n";   
        /*if invalid the Breakcheck will 
        print because of no break statement in default*/
    }
    cout<<"check"<<"\n";
}

int main(){
    switchcase();
    return 0;
}