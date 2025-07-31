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
    int key;
    
    cout<<"enter the number to be searched : ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==numbers[i]){
            cout<<"the postion of the key in the array is : "<<i+1;
        }
       
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
enter the number to be searched : 30
the postion of the key in the array is : 3
*/
