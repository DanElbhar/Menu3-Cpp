#include <iostream>
#include <cmath>
using namespace std;
 
 double arrayStdev(double *array, int size) {
    double sum = 0.0, Deviation = 0.0, mean;
    int i;
 
    for(i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    // Calculating mean 
    mean = sum/size;
 
    for(i = 0; i < size; ++i) {
        Deviation += pow(array[i] - mean, 2);
    }
 
    return sqrt(Deviation/size);
}

int main() {
    int count, i;
    double inputArray[500];
     
    cout << "Enter number of elements: \n";
    cin >> count;
     
    cout << "Enter " << count <<" elements: \n";
    for(i = 0; i < count; i++){
     cin >> inputArray[i];
    }
 
    cout << "Standard Deviation = " << arrayStdev(inputArray, count);
 
    return 0;
}

