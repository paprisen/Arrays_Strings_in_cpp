//Papri Sen
//24070123070
//A3
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum element is: " << max << endl;
    cout << "Minimum element is: " << min << endl;

    return 0;
}
/*
Output:
Enter number of elements: 4
Enter 4 elements:
10
20
30
40
Maximum element is: 40
Minimum element is: 10
*/
