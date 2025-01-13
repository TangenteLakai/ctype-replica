#include <stdio.h>
#include "core.c"

void user_test(void) {
    // Testing by the user
    char lower;
    char upper;
    
    // 1. to_upper
    printf("Enter a single lowercase letter: ");
    scanf(" %c", &lower);
    printf("Is lower: %s\n", is_lower(lower) ? "true" : "false");
    printf("Uppercase variant: %c\n", to_upper(lower));
   


    // 2. to_lower
    printf("Enter a single uppercase letter: ");
    scanf(" %c", &upper);

    printf("Is lower: %s\n", is_lower(lower) ? "true" : "false");
    printf("Lowercase variant: %c\n", to_lower(upper));

}

int main(int argc, char *argv[]) {
    if (argc == 2) {
        user_test();
    }

    // Basic testing
    if (to_lower('A') != 'a') {
        printf("ERROR: to_lower\n");
        return 1;
    }
    else if (to_upper('h') != 'H') {
        printf("ERROR: to_upper\n");
        return 1;
    }
    else if (is_lower('b') != true) {
        printf("ERROR: is_lower\n");
        return 1;
    }
    else if (is_upper('b') != false) {
        printf("ERROR: is_upper\n");
        return 1; 
    }
    

    printf("All tests passed\n")
    return 0;
}


