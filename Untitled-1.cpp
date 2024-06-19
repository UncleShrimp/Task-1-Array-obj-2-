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

int randomNum(int a, int b) {
    return a+rand()%b;
}
int randfill(int arr[20][20]) {
    for (int y=0; y<20; y++) {
        for (int x=0; x<20; x++) {
            arr[y][x] = randomNum(1, 100);
            if (parity(arr[y][x])) {
                arr[y][x]*=2;
            }
        }
        cout<<""<<endl;
    }
}
int printRand(int arr[20][20]) {
    for (int i=0; i<20; i++) {
        for (int ii=0; ii<20; ii++) {
            cout<<arr[i][ii]<<" ";
        }
        cout<<""<<endl;
    }
}

int main() {
    int array2D[20][20];
    randfill(array2D);
    cout<<""<<endl;
    printRand(array2D);
}