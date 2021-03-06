#include "math_trans.h"

char *transformation(char *str) {
    struct Elem *prev_ptr = NULL;
    int count=0;
    for (int i = strlen(str); i >= 0; i--) {
        struct Elem *ptr = (struct Elem *) calloc(1, sizeof(struct Elem));
        if(sign(str[i]))
            count++;
        ptr->icon = str[i];
        if (prev_ptr != NULL) {
            ptr->next = prev_ptr;
        }
        prev_ptr = ptr;
    }
    char* result = (char*)calloc(strlen(str)+count*2, sizeof(char));
};

bool sign(char a){
    if(a=='+' || a=='-' || a=='*' || a=='/'){
        return true;
    }
    return false;
}