#include<iostream>
using namespace std;

int main()
{

// Activity No.1 - 2

    int numberDay;
    
    cout << "Enter a number (1-7): ";
    cin >> numberDay;
    
    switch(numberDay){
    case 1:
        cout << "The day is: Monday";
        break;
    case 2:
        cout << "The day is: Tuesday";
        break;
    case 3:
        cout << "The day is: Wednesday";
        break;
    case 4:
        cout << "The day is: Thursdays";
        break;    
    case 5:
        cout << "The day is: Friday";
        break;
    case 6:
        cout << "The day is: Saturday";
        break;   
    case 7:
        cout << "The day is: Sunday";
        break;
    default:
        cout << "Invalid. Please choose between number 1 to 7 only! " << endl;
    }
    return 0;
}


