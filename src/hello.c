/* Copyright 2019 SiFive, Inc */
/* SPDX-License-Identifier: Apache-2.0 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // char* str[] = "Hello, world!";
    // // printf(str, "\n");
    // printf(str);
    // printf('\n');
    // // str = (char*)realloc(str, (strlen(str) * 2));
    // char* str2[] = "Today is a great day";
    // strcpy(str, str2);
    // printf(str);

    // char first[40];
    // char dest[100];

    // memset(dest, '\0', sizeof(dest));
    // strcpy(first, "Hello, world!");
    // printf("Test 1: %s \n", first);
    // strcpy(dest, "Today is a great day!");
    // printf("Test 2: %s \n", dest);
    // strcpy(dest, "Hello, world! Today is a great day!");
    // printf("Test 3: %s \n", dest);

    printf("David says , \" Programming is fun ! \". \n");
    printf("Good day !\n");

    char t1;                // char | range = -128 to 127 | MEMORY_SIZE in BYTES = 1
    // unsigned char t8;       // unsigned char | range = 0 to 255 | MEMORY_SIZE in BYTES = 1
    // short t2;               // short int | range -32,768 to 32 767 | 2 bytes
    // unsigned short t9;      // short int | range 0 to 65, 535 | 2 BYTES
    // long t3;                // long int
    // long long t4;           // long long int
    // unsigned t5;            // unsigned int
    // unsigned long t6;       // unsigned long int
    // unsigned short t7;      // unsigned short int

    // size_t sz = sizeof(some_var);

    printf("Size of char data type = %d\n", sizeof(t1));


    return 0;
}
