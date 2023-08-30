/**
 * _strcpy - Copy a string
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string
 */
char *_strcpy(char *dest, char *src) {
    char *dest_start = dest;

    // Copy each character from source to destination
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Append null terminator to the destination string
    *dest = '\0';

    return dest_start;
}

