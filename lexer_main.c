#include "lexer_main.h"

int main(int argc, char** argv)
{
    // check input was provided
    if (argc != 2)
        bail_with_error("Must supply one filename as an argument.\n");

    // input var
    char* filename = (char*) malloc(sizeof(argv[1]));
    
    // parse filename
    strcpy(filename, argv[1]);

    // call lexer init
    lexer_init(filename);

    // call lexer output
    lexer_output();

    // we're done
    free(filename);
}