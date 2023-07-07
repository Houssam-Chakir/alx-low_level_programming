/**
 * _strncpy - Copy a specified number of characters from a source string to a destination string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy
 *
 * Return: A pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n) {
    int i;

    // Copy each character from source to destination up to the specified limit
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    // If the source string is shorter than n, pad the remaining destination with null characters
    for (; i < n; i++) {
        dest[i] = '\0';
    }

    return dest;
}

