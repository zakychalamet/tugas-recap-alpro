#include <stdio.h>

int main(){
    /*
    v = kecepatan
    s = jarak
    t = waktu
    */
    int s1, t1;
    int v1, t2;
    int s2, v2;

    scanf("%d", &s1);
    scanf("%d", &t1);
    scanf("%d", &v1);
    scanf("%d", &t2);
    scanf("%d", &s2);
    scanf("%d", &v2);

    float v = (float) s1/t1;
    float s = (float) v1*t2;
    float t = (float) s2/v2;

    printf("%.2f\n", v);
    printf("%.2f\n", s);
    printf("%.2f\n", t);
}