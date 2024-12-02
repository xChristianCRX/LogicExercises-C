#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearBuffer(FILE *file) {
    while (fgetc(file) != '\n') {}
}

void expandData(FILE *input, FILE *output) {
    char line[128];
    while (fgets(line, sizeof(line), input)) {
        for (int i = 0; i < strlen(line); i++) {
            if (line[i] != ' ' && line[i] != '@') {
                char value[3] = {line[i], '\0'};
                if (line[i + 1] != ' ') {
                    value[1] = line[++i];
                }
                fprintf(output, "%s ", value);
            } else if (line[i] == '@') {
                i += 2; 
                char element[3] = {line[i], '\0'};
                if (line[i + 1] != ' ') {
                    element[1] = line[++i];
                }
                i += 2; 
                char quantityStr[3] = {line[i], '\0'};
                if (line[i + 1] != ' ') {
                    quantityStr[1] = line[++i];
                }
                int quantity = atoi(quantityStr);
                for (int j = 0; j < quantity; j++) {
                    fprintf(output, "%s ", element);
                }
            }
        }
        fprintf(output, "\n");
    }
}

void compactData(FILE *input, FILE *output) {
    char line[128];
    while (fgets(line, sizeof(line), input)) {
        for (int i = 0; i < strlen(line); i++) {
            if (line[i] == ' ' || line[i] == '\n') continue;

            char element[3] = {line[i], '\0'};
            if (line[i + 1] != ' ' && line[i + 1] != '\n') {
                element[1] = line[++i];
            }

            int count = 1;
            int j = i + 2;
            while (j < strlen(line) && line[j] == element[0]) {
                count++;
                if (element[1] == '\0') {
                    j += 2;
                } else {
                    j += 3;
                }
            }

            if (count > 3) {
                fprintf(output, "@ %s %d ", element, count);
            } else {
                for (int k = 0; k < count; k++) {
                    fprintf(output, "%s ", element);
                }
            }

            i = j - 2;
        }
        fprintf(output, "\n");
    }
}

void processHeader(FILE *input, FILE **output) {
    char type[3];
    fscanf(input, "%s", type);

    if (strcmp(type, "P8") == 0) {
        *output = fopen("result.pgm", "w");
        fprintf(*output, "P2\n");
    } else {
        *output = fopen("result.pgmc", "w");
        fprintf(*output, "P8\n");
    }

    int width, height, maxValue;
    fscanf(input, "%d %d %d", &width, &height, &maxValue);
    fprintf(*output, "%d %d\n%d\n", width, height, maxValue);

    if (strcmp(type, "P8") == 0) {
        expandData(input, *output);
    } else {
        compactData(input, *output);
    }
}

int main() {
    char inputFile[] = "example1.pgm";
    FILE *input = fopen(inputFile, "r");
    if (!input) {
        perror("Error opening input file");
        return EXIT_FAILURE;
    }

    FILE *output = NULL;
    processHeader(input, &output);

    fclose(input);
    if (output) {
        fclose(output);
    }

    return EXIT_SUCCESS;
}
