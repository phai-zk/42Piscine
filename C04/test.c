void    test(char *str, char *t)
{
    str++;
    str++;
    *t = *str;
}

int main(int argc, char const *argv[])
{
    char *t;
    test("Hello", t);
    printf("%s", t);
    return 0;
}
