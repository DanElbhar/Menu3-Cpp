#include <iostream>
#include <cmath>


using namespace std;

int NeastPrime(int n) {   
    int SmallPrime, BigPrime;
    int number = 0;
    int i = n + 1;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) 
        number++;
    }
        if (number == 2) //A single case of an even number is prime
        return n;
    
    
    while (number != 2) {
        number = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0)
            number++;
        }
            if (number == 2)
            BigPrime = i;
                i++;
    }
    
     number = 0;
    i = n - 1;
    while(number!=2){
        number = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0)
            number++;
        }
            if (number == 2)
            SmallPrime = i;
                 i--;
    }
    //Checks what initial number to return:
    if (BigPrime - n > n - SmallPrime)
    return SmallPrime;
    
    if (BigPrime - n < n - SmallPrime)
    return BigPrime;
    
    if (BigPrime - n == n - SmallPrime)
    return SmallPrime;
    
}

int main()
{
    cout<<NeastPrime(9)<<endl;

    return 0;
}


