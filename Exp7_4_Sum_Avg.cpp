// Papri Sen
// 24070123070
// A3
#include<iostream>
using namespace std;
int main(){
    cout<<"enter the size of array : ";
    int n;
    cin>>n;
    int numbers[n];
    for(int i=0;i<n;i++){
        cout<<"enter the values "<<endl;
        cin>>numbers[i];
        
    }
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum=(sum+numbers[i]);
        
       
    }
    cout<<"the sum is : ";
    cout<<sum<<endl;
    int avg=sum/n;
    cout<<"the avg is : ";
    cout<<avg;

    
    return 0;
}
/*
output:
enter the size of array : 3
enter the values 
10
enter the values 
20
enter the values 
30
the sum is : 60
the avg is : 20
*/
