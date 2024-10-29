#include<iostream>
using namespace std;

int main()
{
    // DSA Act No. 2 - 3
    string name[4][1][1] = {
        {
            {"BRYCE"}
        },
        {
            {"ANRIE"}
        },
        {
            {"PASTORFIDE"}
        },
        {
            {"BOMBALES"}
        }
    };
    
    for (int l = 0; l < 4; ++l){
        for (int r = 0; r < 1; ++r){
                for (int c = 0; c < 1; ++c){
                cout << name[l][r][c] << endl;
    }
    }
    }
    return 0;
}


