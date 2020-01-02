
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

bool perfect(int n) {

    int sum = 0;

    for (int i = 1; i < n; i++) {

        if (n % i == 0)//check if num dividing.
            sum = sum + i;
    }

    if (sum == n) {  //if the sum = to number its true.
        return true;
        
    }
    else {
        return false;
        
    }

}
int contains(int arrbig[], int size1, int arrsmall[], int size2){
    int i=0,j=0;
    int index=-1;
   
   while(arrbig[i]!=arrsmall[0] && i<size1||j<size2){//If the number is not equal,continue. 
       i++,j++;
    }
           cout<<i<<endl;
 //If the numbers are equal, you will advance at the same time-->i,j
             if(arrsmall[0]== arrbig[i])
                index=i;
                i++;
                for(int j=1; j<size2; j++){
                    if(arrsmall[j]==arrbig[i++])
                    
                   {
                    if(j==size2-1)
                    return index;
            }    
            
        }
        return -1;
    }
    
    int sub_seq_of_zeros(int arr[], int size) 
{ 
    int Count = 0; 
    int Result = 0;  
  
    for (int i = 0; i <  size; i++) 
    { 
        // Reset count when 1 is found 
        if (arr[i] == 1) 
            Count = 0; 
  
        // If 0 is found, count++ and update result
     
        else
        { 
            Count++;  //count 0 
            Result = max(Result, Count); 
        } 
    } 
  
    return Result; 
} 
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
int main()
{
   
     int number; int t;
   while(number>=0||number<=5){
    cout << "Menu:"<<endl;
    cout << "0.  Exit"<<endl;
    cout << "1.  for display neastprime"<<endl;
    cout << "2.  check perfect  number"<<endl;
    cout << "3.  contains another array"<<endl;
    cout << "4.  longest subsequence of zero"<<endl;
    cout << "5. Standard deviation " <<endl;
    cin>>number;
    
    if(number==1){
       int num;
        cout<<"Enter num"<<endl;
         cin>>num;
         cout<<NeastPrime(num)<<endl;
         
    }
if(number==2){
    	int z;
	cout << "enter number and power : "<<endl;
	cin >>z;

if(perfect(z)==true){
   cout<<"The num is perfect number"<<endl; 
}
else{
   cout<<"The num is not perfect number"<<endl; 
}
}
if(number==3){
     int  arrbig[] = {1,2,3,4,6,9,5}; 
    int arrsmall[] = {4,6,9}; 
    int size1 = sizeof(arrbig) / sizeof(int); 
    int size2 = sizeof(arrsmall) / sizeof(int); 
   cout <<"The arr is:"<<contains(arrbig,7,arrsmall,3)<<endl; 
    
} 
if(number==4){
     int arr[] = {1,0,0,1,1,0,1,0,0,0,1,0 };  
                 
    int size = sizeof(arr)/sizeof(arr[0]); 
    cout << sub_seq_of_zeros(arr,  size) << endl; 
}
if(number==5){
      int count, i;
    double inputArray[500];
     
    cout << "Enter number of elements: \n";
    cin >> count;
     
    cout << "Enter " << count <<" elements: \n";
    for(i = 0; i < count; i++){
     cin >> inputArray[i];
    }
 
    cout << "Standard Deviation = " << arrayStdev(inputArray, count);
     }
   }
   return 0;
   
 }
