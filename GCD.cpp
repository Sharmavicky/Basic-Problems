#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
            Time Complexity (Brute Force Approach): O(min(a, b))
            Time Complexity (Better Approach): O(min(a, b))
            Time Complexity (Optimal Approach): O(log(min(a, b)))
*/


class GCD {
    public:
    int BruteForce_Approach(int a, int b) { // Brute Force Approach
        int gcd = 1;
        for(int i=1; i<=min(a, b); i++) {
            if (a%i==0 && b%i==0) {
                gcd = i;
            }
        }
        return gcd;
    };

    int Better_Approach(int a, int b) { // Better Approach
        for(int i=min(a, b); i >= 1; i--) {
            if (a%i == 0 && b%i == 0) {
                return i;
            }
        };
    };

    int Optimal_Approach(int a, int b) { // Optimal Approach
        while (a > 0 && b > 0) {
            if (a > b) {
                a = a % b;
            } else {
                b = b % a;
            }
        }
        if (a == 0) return b;
        return a;
    };
};

// Main Function 
int main() {
    int r1 = GCD().BruteForce_Approach(10, 15);
    int r2 = GCD().Better_Approach(10, 15);
    int r3 = GCD().Optimal_Approach(10, 15);
    cout << r1 << " " << r2 << " " << r3 << endl;
    return 0;
}