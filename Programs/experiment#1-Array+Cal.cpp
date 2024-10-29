#include<iostream>
using namespace std;

int main()
{
    int num, i, x, y, z, op;
    
    cout << "nun use" << endl;
    cin >> num;
    
    int arrNum[num];
    
    for (int i = 0; i < num; ++i) {
        cout << "Enter Num1" << endl;
        cin >> arrNum[i];
        cout << "Enter operator" << endl;
        cin >> op;
        
        switch(op) {
            case 1:
                x = arrNum[i];
                ++i;
                y = arrNum[i];
                z = x + y;
                break;
                cout << "total" << z << endl;
                    if(i == num) {
                    break;
                    }
                    }
        }
        
    return 0;
}