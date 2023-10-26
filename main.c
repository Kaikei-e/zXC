#include <stdio.h>
#include "src/fileExplorer/search.h"
#include "src/interactor/interactor.h"

int main() {
    printf("Hello, World!\n");

    char* path = user_interactor();

    printf("path: %s\n", path);
    search_zips(path);

    return 0;
}
