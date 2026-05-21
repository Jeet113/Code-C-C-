#include <stdio.h>
float Carea(float a)
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
    float arr[100];
    float ar[100];
    int mark[100];
    int i, j, ccount = 0, rcount = 0;
    float carea, rarea, tarea;
    float d, h, w;
    for (i = 1; i <= 100; i++)
    {
        printf("1.Add a circle\n2.Add a rectangle\n3.List items\n4.Get Statistic\n5.Exit\n");
        int x;
        printf("Press a option:");
        scanf("%d", &x);
        if (x == 1)
        {
            printf("What is the diameter:");
            scanf("%f", &d);
            arr[i] = d;
            mark[i] = 1;
            carea = carea + Carea(d);
            ccount++;
            continue;
        }
        else if (x == 2)
        {
            printf("What is the height:");
            scanf("%f", &h);
            printf("What is the weight:");
            scanf("%f", &w);
            arr[i] = h;
            ar[i] = w;
            rarea = rarea + Rarea(h, w);
            rcount++;
            continue;
        }
        else if (x == 3)
        {
            printf("Id     type   dimension\n");
            printf("===========================\n");
            for (j = 1; j < i; j++)
            {
                if (mark[j] == 1)
                {
                    printf("%d Circle %0.1f\n", j, arr[j]);
                }
                else
                {
                    printf("%d Rectangular %0.1fX%0.1f\n", j, arr[j], ar[j]);
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
            printf("The total area occupied by circles: %0.1f(%0.1f%%)\n", carea, (carea / tarea) * 100);
        }
        else if (x == 5)
        {
            break;
        }
    }
}