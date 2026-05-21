#include <stdio.h>
struct warehouse
{
    int id;
    char type[10];
    float d, h, b;
};
float C_area(float a)
{
    float ans = 0.25 * 3.1416 * a * a;
    return ans;
}
float Rarea(float b, float c)
{
    float res = b * c;
    return res;
}
int main()
{
    struct warehouse a[100];
    int i, x, mark[100], ccount = 0, rcount = 0;
    float tarea, rarea, carea;
    for (i = 1; i <= 100; i++)
    {
        printf("1.Add a circle\n2.Add a rectangle\n3.List items\n4.Get Statistic\n5.Exit\n");
        printf("Press a option:");
        scanf("%d", &x);
        printf("\n");
        if (x == 1)
        {
            printf("What is the diameter:");
            scanf("%f", &a[i].d);
            mark[i] = 1;
            ccount++;
            carea = carea + C_area(a[i].d);
            continue;
        }
        else if (x == 2)
        {
            printf("What is the height:");
            scanf("%f", &a[i].h);
            printf("What is the width:");
            scanf("%f", &a[i].b);
            rcount++;
            rarea = rarea + Rarea(a[i].h, a[i].b);
            continue;
        }
        else if (x == 3)
        {
            printf("Id     type      dimension\n");
            printf("===========================\n");
            int j;
            for (j = 1; j < i; j++)
            {
                if (mark[j] == 1)
                {
                    printf("%d Circle %0.1f\n", j, a[j].d);
                }
                else
                {
                    printf("%d Rectangular %0.1fX%0.1f\n", j, a[j].h, a[j].b);
                }
            }
        }
        else if (x == 4)
        {
            tarea = carea + rarea;
            printf("Total Shapes:%d\n", rcount + ccount);
            printf("Total number of Rectangles:%d\n", rcount);
            printf("Total number of Circles:%d\n", ccount);
            printf("Total area:%0.1f\n", tarea);
            printf("The total area occupied by rectangles:%0.1f(%0.1f%%)\n", rarea, (rarea / tarea) * 100);
            printf("The total area occupied by circles: %0.1f(%0.1f%%)\n\n", carea, (carea / tarea) * 100);
        }
        else if (x == 5)
        {
            break;
        }
    }
}