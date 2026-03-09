#include <stdio.h>
#include <assert.h>

int main( ){
    FILE *fp = fopen( "./hw.log", "w" );
    assert( fp );
    fprintf( fp, "Hello, world!\n" );
    fclose( fp );
    return 0;
}

