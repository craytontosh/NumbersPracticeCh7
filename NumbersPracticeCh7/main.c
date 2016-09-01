//
//  main.c
//  Chapter 7 Numbers Practice
//
//  Created by Crayton McIntosh on 8/17/16.
//  Copyright © 2016 Crayton McIntosh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x = 255;
    //prints an integer as a decimal number
    printf("x is %lu.\n", x);
    //prints an integer in base-8 octal
    printf("In octal, x is %lo.\n", x);
    //prints an integer in base-16 hexadecimal
    printf("In hexadecimal, x is %lx.\n", x);
    
    
    return 0;
}
