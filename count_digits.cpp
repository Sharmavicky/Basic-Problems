#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/*
            Time complexity (Brute Force Approach): O(log10(n))
            Space complexity (Brute Force Approach): O(1)

            Time complexity (Optimal Approach): O(1)
            Space complexity (Optimal Approach): O(1)
*/

class CountDigits {
    public:
    int BruteForce_Approach(int num) {
        int count = 0;
        while (num > 0) {
            count++;
            num /= 10;
        }
        return count;
    };

    int Optimal_Approach(int num) {
        int count = log10(num) + 1;
        return count;
    }
};

// Main Function
int main() {
    int result = CountDigits().BruteForce_Approach(123585);
    int result2 = CountDigits().Optimal_Approach(123585);
    cout << "Number of digits: " << result << endl;
    cout << "Number of digits (Optimal): " << result2 << endl;
    return 0;
}