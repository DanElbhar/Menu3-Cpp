
#include<bits/stdc++.h> 
using namespace std; 
  
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
  
// Driver code 
int main() 
{ 
  int arr[] = {1,0,0,1,1,0,1,0,0,0,1,0 };  
                 
    int size = sizeof(arr)/sizeof(arr[0]); 
    cout << sub_seq_of_zeros(arr,  size) << endl; 
    return 0; 
}

