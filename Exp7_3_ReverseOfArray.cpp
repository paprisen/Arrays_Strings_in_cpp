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
    cout<<"the reversed array is : ";
    for(int j=n-1;j>=0;j--){
    
        
        cout<<numbers[j]<<endl;
    }
    
    return 0;
}
/*
output:
enter the size of array : 5
enter the values 
10
enter the values 
20
enter the values 
30
enter the values 
40
enter the values 
50
the reversed array is : 50
40
30
20
10
*/
