/**
 * _atoi - Convert a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer value
 */
int _atoi(char *s) {
    int sign = 1;
    int result = 0;
    int i = 0;

    // Handle the sign
    if (s[0] == '-') {
        sign = -1;
        i++;
    }

    // Process each character of the string
    while (s[i] != '\0') {
        // Check if the character is a digit
        if (s[i] >= '0' && s[i] <= '9') {
            // Update the result by multiplying it by 10 and adding the digit
            result = result * 10 + (s[i] - '0');
        } else {
            // If a non-digit character is encountered, stop processing
            break;
        }
        i++;
    }

    return result * sign;
}

