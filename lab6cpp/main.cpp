#include <iostream>
#include <cmath>

using namespace std;

double recursive_sum(int n);
double recursive_sum();

static double total = 0;

int main() {
    cout << recursive_sum(5) << endl;
    cout << recursive_sum() << endl;
}

double recursive_sum(int n){
    total = 0;
    if (n == 1) {
        total = 1;
    }else{
        recursive_sum(n-1);
        total += pow(-1, n+1)/n;
    }

    return total;
}

double recursive_sum(){
    int n;
    cout << "\nEnter a value to calculate ((-1)^(k+1))/k for all k values from 1 to n: ";
    cin >> n;
    total = 0;

    if (n == 1) {
        total = 1;
    }else{
        recursive_sum(n-1);
        total += pow(-1, n+1)/n;
    }

    return total;
}
