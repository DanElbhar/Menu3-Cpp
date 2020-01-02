#include <iostream>
using namespace std;
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
int main()
{
	int z;
	cout << "enter number and power : "<<endl;
	cin >>z;

if(perfect(z)==true){
   cout<<"The num is perfect number"<<endl; 
}
else{
   cout<<"The num is not perfect number"<<endl; 
}
	return 0;
}
