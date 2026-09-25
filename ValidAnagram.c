bool isAnagram(char* s, char* t) {

    int count1 = strlen(s);
    int count2 = strlen(t);

    if (count1 != count2) {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; i < count1; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}
