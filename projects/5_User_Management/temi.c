#include <windows.h>
#include <stdio.h>

int main() {
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode, oldMode;

    // Save current console mode
    GetConsoleMode(hStdin, &mode);
    oldMode = mode;

    // Disable echo and line input
    mode &= ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT);
    SetConsoleMode(hStdin, mode);

    printf("Press a key: ");
    fflush(stdout);

    char c[10];
    DWORD read;
    ReadConsoleA(hStdin, c, 10, &read, NULL);

    printf("\nYou pressed: %s\n", c);

    // Restore old mode
    SetConsoleMode(hStdin, oldMode);

    return 0;
}
