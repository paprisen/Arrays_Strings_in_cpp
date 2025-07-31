// Papri Sen
// 24070123070
// A3
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter Number of elements:";
    cin >> n;
    int marks[n];
    for(int i = 0;i<n;i++){
        cout << "Enter marks "<<i+1 <<": ";
        cin >> marks[i];
    }
    cout << "marks: ";
    for(int i = 0;i<n;i++){
        cout << marks[i] <<" ";
    }
    return 0;
}
/*
output:
Enter Number of elements:3
Enter marks 1: 70
Enter marks 2: 80
Enter marks 3: 90
marks: 70 80 90 
*/
