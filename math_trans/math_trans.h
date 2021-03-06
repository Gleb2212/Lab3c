#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

struct Elem{
    char icon;
    struct Elem* next;
};

char* transformation(char*);
bool sign(char a);