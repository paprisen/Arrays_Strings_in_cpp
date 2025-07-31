// Papri Sen
// 24070123070
// A3
#include<iostream>
using namespace std;
int main(){
    
    string str1;
    cout<<"enter the string =";
    cin>>str1;
    int m=str1.length();
    for(int i=m-1;i>=0;i--){
        cout<<str1[i];
        
    }
    
    return 0;
} 
/*
Output:
enter the string =hello
olleh
*/
