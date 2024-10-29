#include<iostream>
using namespace std;

int main()
{
    // DSA Act No. 2 - 2
    int arrNumber[4][4]{
    {40, 80, 20, 30},
    {31, 23, 70, 92},
    {11, 18, 25, 34},
    {14, 76, 57, 33}
    };
    
    for (int r = 0; r< 4; ++r){
        cout << "" << endl;
            for (int c = 0; c < 4; ++c){
                cout << arrNumber[r][c] << " ";
            }
    }
    return 0;
}


