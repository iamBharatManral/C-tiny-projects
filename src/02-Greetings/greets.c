//
// Created by Bharat Manral on 17/08/23.
//

#include <stdio.h>
#include <stdlib.h>

void greet01(){
    printf("Hello, Bharat!\n");
}

void greet02(int argc, char* argv[]){
    if ( argc < 2 ) {
        puts("Hello, you handsome beast!");
    } else {
        printf("Hello, %s!\n", argv[1]);
    }
}

int main(int argc, char* argv[]){
    greet02(argc, argv);
    return EXIT_SUCCESS;
}