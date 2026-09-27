int lengthOfLongestSubstring(char* s) {
    int seen[256] = {0};
    int left = 0;
    int max_length = 0;

    for (int right = 0; s[right] != '\0'; right++) {

        seen[(unsigned char)s[right]]++;

        while (seen[(unsigned char)s[right]] > 1) {
            seen[(unsigned char)s[left]]--;
            left++;
        }

        int current_length = right - left + 1;

        if (current_length > max_length) {
            max_length = current_length;
        }
    }

    return max_length;
}
