/* CppCheck - How To Set up Visual Studio Code (VS Code) on Windows to use CppCheck static analysis
https://www.youtube.com/watch?v=A57mCMZqNII */

void f()
{
    char arr[5];
    arr[10] = 0；
}

void f(int *p)
{
    *p = 3;
}

int main()
{
    int *p = 0;
    f(p);
    return 0;
}