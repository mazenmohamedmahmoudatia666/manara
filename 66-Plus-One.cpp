class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Start from the last digit
        for (int i = digits.size() - 1; i >= 0; i--) {
            // If the current digit is less than 9, simply increment it and return the result
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If the current digit is 9, set it to 0 (carry over to the next digit)
            digits[i] = 0;
        }
        // If all digits were 9, we need to add a new digit at the front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
