#include <iostream>
#include <cmath>
using namespace std;


/*
        Time Complexity (Brute Force Approach): O(n)
        Time Complexity (Optimal Approach): O(sqrt(n))

        Space Complexity (Brute Force Approach): O(1)
        Space Complexity (Optimal Approach): O(1)
*/

class isPrime {
    public:
    bool BruteForce_Approach(int n) {
        int count = 0;
        for(int i=1; i<=n; i++) {
            if (n % i == 0) count++;
        };

        if (count == 2) {
            return true;
        } else {
            return false;
        }
    };

    bool Optimal_Approach(int n) {
        int count = 0;
        for(int i=1; i<=sqrt(n); i++) {
            if (n % i == 0) {
                count++;
                if (n/i != i) count++;
            }
        };

        if (count == 2) {
            return true;
        } else {
            return false;
        }
    };
};

// Main Function
int main() {
    bool r1 = isPrime().BruteForce_Approach(175);
    bool r2 = isPrime().Optimal_Approach(1000000084);
    cout << r1 << endl;
    cout << r2 << endl;
    return 0;
}