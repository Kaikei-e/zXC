//
// Created by Kaikei-e on 23/10/27.
//

#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include "search.h"

void search_zips(char *dir_path) {
    struct dirent *entry;
    DIR *DP = opendir( dir_path);
    if (DP == NULL) {
        printf("Error: Cannot open directory.\n");
        return;
    }

    while ((entry = readdir(DP))) {
        char *dot = strrchr(entry->d_name, '.');
        if (dot && strcmp(dot, ".zip") == 0) {
            printf("Found ZIP file: %s\n", entry->d_name);
        }
    }

    closedir(DP);
}
