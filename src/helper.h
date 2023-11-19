//
// Created by Diogo António Costa Medeiros on 19/11/2023.
//

#ifndef HELPER_H
#define HELPER_H

#include <stdio.h>
#include <string.h>

int read_string(char* string, int max_length);

inline int read_string(char* string, const int max_length) {
    const char* pos = fgets(string, max_length, stdin);
    if (pos == NULL) {
        return 0;
    }

    const size_t length = strlen(string);
    if (string[length - 1] == '\n') {
        string[length - 1] = '\0';
    }

    return 1;
}

#endif //HELPER_H
