#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

/*
        Time Complexity (Brute Force Approach): O(n)
        Time Complexity (Optimal Approach): O(sqrt(n))
*/

class AllDivisors {
    public:
    vector<int> BruteForce_Approach(int n) {
        vector<int> divisors;
        for(int i=1; i<=n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
            }
        }
        return divisors;
    };

    vector<int> Optimal_Approach(int n) {
        vector<int> divisors;
        for(int i=1; i<=sqrt(n); i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i != n / i) { // Avoid adding the square root twice if n is a perfect square
                    divisors.push_back(n / i);
                }
            }
        };
        sort(divisors.begin(), divisors.end()); // Sort the divisors in ascending order
        return divisors;
    };
};

// Main Function
int main() {
    vector<int> result = AllDivisors().Optimal_Approach(36);
    cout << "Divisors of 36 are: ";

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    cout << endl;
    return 0;
}