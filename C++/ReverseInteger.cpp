class Solution
{
public:
    int reverse(int x)
    {
        int reversedNumber = 0;
        bool isNegative = false;

        if (x < 0)
        { // Handling negative numbers
            isNegative = true;
            x = -x;
        }

        int prevNumber = 0;

        while (x != 0)
        {
            int currentDigit = x % 10;

            reversedNumber = (reversedNumber * 10) + currentDigit;

            // Overflow occurred!
            if ((reversedNumber - currentDigit) / 10 != prevNumber)
            {
                return 0;
            }

            prevNumber = reversedNumber;
            x /= 10;
        }

        return (isNegative) ? -reversedNumber : reversedNumber;
    }
};