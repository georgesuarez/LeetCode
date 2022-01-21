class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) {
                return false;
            }

            int reversedNumber = reverse(x);

            if (reversedNumber == x) {
                return true;
            } else {
                return false;
            }
        }

        int reverse(int x) {
            long reversedNumber = 0;
            bool isNegative = false;

            if (x < 0) {
                isNegative = true;
                x = -x;
            }

            int prevNumber = 0;

            while (x != 0) {
                long currentDigit = x % 10;

                reversedNumber = (reversedNumber * 10) + currentDigit;

                // Overflow occurred
                if ((reversedNumber - currentDigit) / 10 != prevNumber) {
                    return 0;
                }

                prevNumber = reversedNumber;
                x /= 10;
            }

            return (isNegative) ? -reversedNumber : reversedNumber;
        }
};