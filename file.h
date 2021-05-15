#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <direct.h>

void m_read() {
    FILE *fp = fopen("in.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return;
    }
    char buf[1024];
    while (fgets(buf, 1024, fp) != NULL) {
        printf("%s", buf);
    }
    fclose(fp);
}

void m_write() {
    time_t t = time(NULL);
    char str[100];
    struct tm *tms = localtime(&t);
    strftime(str, sizeof(str), "%Y-%m-%d %H:%M:%S", tms);
    FILE *fp = fopen("out.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return;
    }
    fprintf(fp, "Timestamp: %d\nDate: %s\n", (int) t, str);
    fclose(fp);
}

void run() {
    m_read();
    m_write();
}