#include <stdlib.h>
#include <stdio.h>

int str_len(char *str) {
    int len = 0;
    while (str[len])
        len++;
    return len;
}

int str_full_len(int size, char **strs, char *sep) {
    int i;
    int sep_len;
    int len;

    i = 0;
    len = 0;
    sep_len = str_len(sep);
    while (i < size) {
        len += str_len(strs[i]);
        if (i < size - 1) // Add separator length only between strings
            len += sep_len;
        i++;
    }
    return len;
}

char *ft_strjoin(int size, char **strs, char *sep) {
    char *dest;
    int i, j, k, pos;

    if (size <= 0)
        return (char *)malloc(sizeof(char));

    dest = (char *)malloc(str_full_len(size, strs, sep) + 1);
    if (!dest)
        return 0;

    pos = 0;
    for (k = 0; k < size; k++) {
        for (j = 0; strs[k][j]; j++)
            dest[pos++] = strs[k][j];
        if (k < size - 1) {
            for (j = 0; sep[j]; j++)
                dest[pos++] = sep[j];
        }
    }
    dest[pos] = '\0';
    return dest;
}

int main(void) {
    char *strs[] = {"1World", "Hello", "\r", "fiuytfgui6543", "dasadasd"};
    char *sep = "";
    char *str;
    str = ft_strjoin(5, strs, sep); // size should match the number of strings
    if (str) {
        printf("%s", str);
        free(str); // Don't forget to free the allocated memory
    }
    return 0;
}
