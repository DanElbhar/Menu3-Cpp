#include <iostream>
using namespace std;

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
     
int main() 
{ 
    int  arrbig[] = {1,2,3,4,6,9,5}; 
    int arrsmall[] = {4,2,6,9}; 
    int size1 = sizeof(arrbig) / sizeof(int); 
    int size2 = sizeof(arrsmall) / sizeof(int); 
   cout <<"The arr is:"<<contains(arrbig,7,arrsmall,3)<<endl; 
    return 0; 
}