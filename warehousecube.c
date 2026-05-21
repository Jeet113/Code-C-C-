#include <stdio.h>
struct warehouse
{
    float d, h, b, l, m, n;
};
float C_area(float a)
{
    return (0.25 * 3.1416 * a * a);
}
float Rarea(float b, float c)
{
    return (b * c);
}
float Cube_area(float l, float m, float n)
{
    return (2 * (l * m + m * n + n * l));
}
int main()
{
    struct warehouse a[100];
    int i, x, mark[100], ccount = 0, rcount = 0, cube_count = 0;
    float tarea, rarea, carea, cube_area;
    for (i = 1; i <= 100; i++)
    {
        printf("\n");
        printf("1.Add a circle\n2.Add a rectangle\n3.Add a cube\n4.List items\n5.Get Statistic\n6.Exit\n");
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
            mark[i] = 2;
            rcount++;
            rarea = rarea + Rarea(a[i].h, a[i].b);
            continue;
        }
        else if (x == 3)
        {
            printf("What is the cube length:");
            scanf("%f", &a[i].l);
            printf("What is the cube width:");
            scanf("%f", &a[i].m);
            printf("What is the cube height:");
            scanf("%f", &a[i].n);
            cube_count++;
            cube_area = cube_area + Cube_area(a[i].l, a[i].m, a[i].n);
            continue;
        }
        else if (x == 4)
        {
            printf("\n");
            printf("Id     type      dimension\n");
            printf("==========================\n");
            int j;
            for (j = 1; j <= i; j++)
            {
                if (mark[j] == 1)
                {
                    printf("%d Circle %0.1f\n", j, a[j].d);
                }
                else if (mark[j] == 2)
                {
                    printf("%d Rectangular %0.1f X %0.1f\n", j, a[j].h, a[j].b);
                }
                else
                {
                    printf("%d Cube %0.1f X %0.1f X %0.1f\n", j, a[j].l, a[j].m, a[j].n);
                }
            }
        }
        else if (x == 5)
        {
            tarea = carea + rarea + cube_area;
            printf("Total Shapes:%d\n", rcount + ccount + cube_count);
            printf("Total number of Rectangles:%d\n", rcount);
            printf("Total number of Circles:%d\n", ccount);
            printf("Total number of Circles:%d\n", cube_count);
            printf("Total area:%0.1f\n", tarea);
            printf("The total area occupied by rectangles:%0.1f(%0.1f%%)\n", rarea, (rarea / tarea) * 100);
            printf("The total area occupied by circles: %0.1f(%0.1f%%)\n", carea, (carea / tarea) * 100);
            printf("The total area occupied by cube: %0.1f(%0.1f%%)\n\n", cube_area, (cube_area / tarea) * 100);
        }
        else if (x == 6)
        {
            break;
        }
    }
}