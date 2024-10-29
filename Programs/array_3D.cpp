#include<iostream>
using namespace std;

int main()
{
    int grade[2][3][2]= {
        // Layer 1
        {
            {0,1},
            {2,3},
            {4,5}
        },
        // Layer 2
        {
            {5,7},
            {8,9},
            {20,11}
        }
    };

    for (int l=0; l<2; ++l) {
        cout << "lyer" << l << endl;
        for(int R=0; R<3; ++R) {
            for(int c=0; c<2; ++c) {
                cout << "row" << R << " col " << c << " is " << grade[l][R][c]<<endl;
            }
        }
    };

    return 0;
}
