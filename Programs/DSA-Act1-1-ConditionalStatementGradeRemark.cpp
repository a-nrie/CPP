
#include <iostream>
using namespace std;

int main()
{
// Activity No. 1 - 1
    int grade; 
    string remarks;
    
    cout << "Enter grade from 0 - 100: ";
    cin >> grade;
    
    if (grade < 60) {
        remarks = "Unsatisfactory";
    }
    else if (grade < 69) {
        remarks = "Average";
    }
    else if (grade < 79) {
        remarks = "Satisfactory";
    }
   else if (grade < 89) {
        remarks = "Very Good";
    }
   else if (grade < 100) {
        remarks = "Excellent";
    }
    else {
        remarks  = "Invalid grade, try again!";
    }
    cout << "Your grade remark is: " << remarks << endl;
    return 0;
}