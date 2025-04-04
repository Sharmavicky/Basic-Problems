#include <iostream>
using namespace std;

/*
            Time complexity: O(log10(n)+1)
            Space complexity: O(1)
            Note: The time complexity is O(log10(n)+1) because the number of digits in a number n is log10(n)+1.
            The space complexity is O(1) because we are using a constant amount of space.
*/

class ReverseNumber {
    public:
    int reverse_num(int num) {
        int reversed = 0;
        while (num > 0) { 
            reversed = reversed * 10 + num % 10;
            num /= 10;
        };
        return reversed;
    };
};

// Main function
int main() {
    int result = ReverseNumber().reverse_num(10400);
    cout << result;
    return 0;
}