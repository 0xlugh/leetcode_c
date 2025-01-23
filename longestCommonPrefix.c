char* longestCommonPrefix(char** strs, int strsSize) {
    int n = strlen(strs[0]);

    char *ans = (char*)malloc((n + 1) * sizeof(char));
    int a = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < strsSize; j++) {
            if (strs[j][i] != strs[0][i]) {
                ans[a] = '\0';
                return ans;
            }
        }
        ans[a++] = strs[0][i];
    }

    ans[a] = '\0';
    return ans;
}
