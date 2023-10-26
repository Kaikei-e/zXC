//
// Created by Kaikei-e on 23/10/27.
//

#include "interactor.h"

#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <malloc.h>
#include <stdlib.h>

char* user_interactor(){
    printf("Please input the path of the directory you want to search.\n");
    const int size = 256;

    char* dir_path = malloc(size);
    if (dir_path == NULL) {
        printf("Error: Cannot allocate memory.\n");
        exit(EXIT_FAILURE);
    }
    fgets(dir_path, size, stdin);

    size_t len = strlen(dir_path);
    if (len > 0 && dir_path[len-1] == '\n') {
        dir_path[--len] = '\0';
    }

    return dir_path;
}
