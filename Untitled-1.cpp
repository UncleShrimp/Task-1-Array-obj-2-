#include <iostream>

using namespace std;

bool parity(int in) {
    if (in%2==0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int array2D[20][20];

    for (int y=0; y<20; y++) {
        for (int x=0; x<20; x++) {
            array2D[y][x] = 1+rand()%100;
            if (parity(array2D[y][x])) {
                cout<<"True";
                array2D[y][x]*=2;
            }
            cout<<array2D[y][x]<<" ";
        }
        cout<<""<<endl;
    }
}