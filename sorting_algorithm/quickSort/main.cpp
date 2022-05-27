#include <iostream>
#include <vector>

using namespace std;

// quick sort
// Target array = {1,8,3,5,6,2,9,4,10,7}
// sorted array = {1 2 3 4 5 6 7 8 9 10}

// Best case = O(nlogN)
// Normal case = O(nlogN)
// Worst case = O(n^2)
using namespace std;

int target[10] = {1,8,3,5,6,2,9,4,10,7};
int n = 10;


int partition(int *a, int left, int right) {
    int p = a[left];
    int i = left + 1;
    for(int j = i; j <= right; j++) {
        if(a[j] < p) {
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[left], a[i-1]);
    return i-1;
}

void sort(int *a, int left, int right) {
    if(left >= right)
        return ;
    int p = partition(a, left, right);
    sort(a, left, p);
    sort(a, p + 1, right);
}

int main() {
    sort(target, 0, n-1);
    for(int i = 0; i < n; i++) {
        cout << target[i] << ' ';
    }
}

