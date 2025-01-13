#include <stdbool.h>

char to_upper(char c) {
    c = c - 32;
    return c;
}


char to_lower(char c) {
    c = c + 32;
    return c;
}


bool is_upper(char c) {
    if (c >= 'A' && c <= 'Z') {
        return true;
    }
    else {
        return false;
    }
}


bool is_lower(char c) {
    if (c >= 'a' && c <= 'z') {
        return true;
    }
    else {
        return false;
    }
}
