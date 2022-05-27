#include <iostream>
#include <vector>

using namespace std;

// selection sort
// Target array = {1,8,3,5,6,2,9,4,10,7}
// sorted array = {1 2 3 4 5 6 7 8 9 10}

// Worst Case = O(n^2)
// Normal Case = O(n^2)
// Best Case = O(n^2)

// sorts in-place

int main() {
    vector<int> arr = {1,8,3,5,6,2,9,4,10,7};
    for(int i = 0; i < arr.size(); i++) {
        int min = arr[i];
        for(int j = i+1; j < arr.size(); j++) {
            if(min > arr[j]) {
                min = arr[j];
                swap(arr[i], arr[j]);
            }
        }
        cout << arr[i] << ' ';
    }
}

