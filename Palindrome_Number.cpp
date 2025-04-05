#include <iostream>
using namespace std;

/*
            Time complexity: O(log10(n)+1);
            Space complexity: O(1);
*/

class PalindromeNumber {
    public:
    bool Optimal_Approach(int num) {
        if (num < 0) { // if number is less than 0, than it is not a palindrome number
            return false;
        } else if (num == 0) { // if number is 0, than it is a palindrome number
            return true;
        } else if (num > 0) {
            int original_number = num;
            int rev_num = 0;
            while (num > 0) {
                rev_num = rev_num * 10 + num % 10;
                num /= 10;
            }
            
            if (original_number == rev_num) {
                return true;
            } else {
                return false;
            }

        }
    }
};

// Main Function
int main() {
    bool result = PalindromeNumber().Optimal_Approach(-121);
    cout << result;
    return 0;
}