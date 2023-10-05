#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(void) {
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    int x1, y1, r1, x2, y2, r2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    float rast;
    int max_r, min_r;
    max_r = max(r1 , r2);
    min_r = min(r1 , r2);
    rast = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("%d %d %lf\n", max_r, min_r, rast);
    if ((rast > r1 + r2) || (max_r > rast + min_r))
        printf("Окружности не касаются");

    else if ((x1 == x2) && (y1 == y2) && (r1 == r2))
        printf("Окружности совпадают");
    
    else if ((rast == r1 + r2) || (max_r == rast + min_r))
        printf("Окружности касаются в одной точке");
    
    else 
        printf("Окружности касаются в двух точках");

    return 0;   

}