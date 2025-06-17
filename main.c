#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()
{
    int seconds;

    printf("Enter a time :");
    scanf("%d", &seconds);

    while(seconds>0)
    {
        printf("The remaining time is : %d\n", seconds);
        fflush(stdout);
        Sleep(1000);
        seconds--;
    }

    printf("The time is up!");

    Beep(750,500);
    Sleep(500);
    Beep(850,500);
    Sleep(500);
    Beep(950,500);
    Sleep(500);

    time_t now = time(NULL);

    struct tm*info = localtime(&now);

    char buffer[80];

    strftime(buffer, sizeof(buffer), "%I:%M:%S %p", info);

    printf("The time is : %s", buffer);



}
