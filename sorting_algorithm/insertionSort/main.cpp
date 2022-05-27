#include <iostream>
#include <vector>

using namespace std;

// insertion sort
// Target array =  {1, 8, 3, 5, 6, 2, 9, 4, 10, 7}
// Sorted array = {1 2 3 4 5 6 7 8 9 10}

// Worst Case = O(n^2)
// Normal Case = O(n^2)
// Best Case = O(N)

//sorts in-place
int n = 10;
vector<int> a = {1, 8, 3, 5, 6, 2, 9, 4, 10, 7};

int main() {
    for(int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    }
    for(auto i : a) {
        cout << i << ' ';
    }
    return 0;
}
