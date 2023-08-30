/**
 * _strstr - Locate a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: A pointer to the first occurrence of the substring, or a pointer to the end of the haystack string if the substring is not found
 */
char *_strstr(char *haystack, char *needle) {
    if (*needle == '\0') {
        return haystack;
    }

    while (*haystack) {
        char *start = haystack;
        char *sub = needle;

        // Check if current characters match
        while (*haystack && *sub && (*haystack == *sub)) {
            haystack++;
            sub++;
        }

        // If the entire substring is found, return the starting position
        if (*sub == '\0') {
            return start;
        }

        // Move to the next character in haystack
        haystack = start + 1;
    }

    return haystack; // Substring not found, return a pointer to the end of the haystack string
}
