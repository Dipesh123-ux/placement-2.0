#include <iostream>
using namespace std;

// Function to compute the Greatest Common Divisor (GCD) of two numbers.
long long find_gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

// Function to find the maximum size of a valid interval for a given number n.
long long find_max_valid_interval(long long n) {
    long long interval_size = 1;
    for (long long l = 1; l <= n; ++l) {
        long long lcm = (l * n) / find_gcd(l, n);
        if (lcm > n) {
            break;
        }
        interval_size = max(interval_size, n - l + 1);
    }
    return interval_size;
}

int main() {
    int t;
    cin >> t; // Input: Number of test cases

    while (t--) {
        long long n;
        cin >> n; // Input: n for each test case
        long long result = find_max_valid_interval(n);
        cout << result << endl;
    }

    return 0;
}
