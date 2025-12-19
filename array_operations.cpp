#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++) cin >> arr[i];

    int sum = 0, max = arr[0], min = arr[0];
    for(int i=0; i<n; i++) {
        sum += arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    cout << "Sum: " << sum << "\nAverage: " << (float)sum/n;
    cout << "\nMax: " << max << "\nMin: " << min;
    return 0;
}
