#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int main() {
    srand (time(NULL));
    int max;
    cout << "Max Array Length: ";
    cin >> max;
    int sz=rand()%max+1;
    cout << "Array Length:" << sz << endl; 
    int randArray[sz];
    for(int i=0;i<sz;i++)
        randArray[i]=rand()%100;
    
    for(int i=0;i<sz;i++) {
        cout<< randArray[i] << ",";
    }
    cout << endl;

    return 0;
}