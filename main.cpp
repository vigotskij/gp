#include <iostream>

    /*
     * microiteración 1.1 begin
     *  abordamos la definición de "isNull"
     *
     *  justificación:
     *      "Lenguaje de programación C++", 4.1.1, 4.3, 5.2.
     *
     */

struct Word
{
    /* microiteration 1.2, begin.
     * resolvemos: 'items' no se declaró en este ámbito.
     *
     * justificación: "El lenguaje...", 4.1.
     */
    enum { MAX_STRING_LENGTH = 254, CONTAINER_CAPACITY = MAX_STRING_LENGTH + 1 };
    char items[ CONTAINER_CAPACITY ] ;
    // microiteration 1.2, end.
    bool isNull( void )
    {
        return items[ 0 ] == '\0' ;
    }
    //microiteration 1.4
    const char* c_string( void )
    {
        return &( items[ 0 ] ) ;
    }
};



/*
 * Abordar la definición de "process"
 */
void process ( Word thisWord )
{
    // Por simplicidad, en este punto elegimos como "procesamiento de una palabra"
    // la accion de mostrarla en el stdout, en nuestro caso en pantalla,

    //microiteration 1.4
    std::cout << thisWord.c_string() << std::endl ;

    //
}

// microiteración 1.5
// aborda la definicion de "getWordFromText".
typedef const char* SetOfChar ;

SetOfChar alphabet = "abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKLMNÑOPQRSTUVWXYZ" ;
SetOfChar delimiter = " ,;:" ;
SetOfChar endOfText = "." ;

bool contain( SetOfChar set , char ch )
{
    size_t cardinal = strlen( set ) ;
    size_t idx = 0 ;
    for ( ; idx < cardinal && set[ idx ] != ch ; idx++ ) ;
    return ( idx < cardinal ) ;
}

Word getWordFromText( void )
{
    enum States { idle , working } ;
    static States state = idle ;

    Word word = "" ;
    bool done = false ;

    while ( !done )
    {
        if ( state == idle ) {
            char ch std::cin.get() ;
            if ( contain( endOfText , ch ) )
            {
                done = true ;
                state = idle ;
            } else if ( contain( alphabet , ch ) )
            {
                word = word + ch ;
                state = working ;
            } else if ( contain( delimiter , ch ) )
            {
                done = true ;
                state = idle ;
            }
        }
    }

    return word ;
}
// microiteration 1.5 end.

int main( int argc , const char * argv[] )
{
    unsigned count = 0 ;
    Word word ;
    word = getWordFromText() ;
    while ( !( word.isNull() ) )
    {
        process( word ) ;
        count++ ;
        word = getWordFromText() ;
    }
    std::cout << "words in text: " << count << std::endl ;
    // microiteration 1.1, end.
    return 0;
}
