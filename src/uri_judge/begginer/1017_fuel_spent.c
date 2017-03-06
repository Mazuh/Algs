/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1016
*/

#include <stdio.h>

int main(){

    int spentTime, averageSpeed; /* km, hours */

    scanf("%d %d", &spentTime, &averageSpeed);

    double averageDistance = spentTime * averageSpeed; /* physics */

    /* Car does 12km/L, I found this formula using proportion calculation */
    double neededFuel = averageDistance / 12.0;

    printf("%.3lf\n", neededFuel);

    return 0;
}
