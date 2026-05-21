#include <stdio.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    int N;
    fscanf(inputFile, "%d", &N);

    double maxTaste = 0;
    double maxCost = 0;

    for (int i = 0; i < N; i++) {
        double cost, taste;
        fscanf(inputFile, "%lf %lf", &cost, &taste);

        if (taste > maxTaste) {
            maxTaste = taste;
            maxCost = cost;
        }
    }

    fprintf(outputFile, "%.2lf\n", maxCost);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
