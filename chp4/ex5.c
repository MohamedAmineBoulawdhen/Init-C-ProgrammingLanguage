#include <stdio.h>
#include <string.h>

int main(void)
{
    float fileSize, downloadSpeed, downloadTime;

    printf("Enter your Pc's download speed\n");
    scanf("%f", &downloadSpeed);
    printf("Enter the file size\n");
    scanf("%f", &fileSize);
    downloadTime = fileSize / downloadSpeed;
    printf("%.6f\n", downloadSpeed); // JUST TO SEE IF C MAKE ROUND THE NUMBER
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", downloadSpeed, fileSize, downloadTime);

    return 0;
}