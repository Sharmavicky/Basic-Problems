#include <iostream>
using namespace std;

class isPrime {
    public:
    bool BruteForce_Approach(int n) {
        for(int i=2; i<n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    };
};

// Main Function
int main() {
    bool result = isPrime().BruteForce_Approach(175);
    cout << result;
    return 0;
}