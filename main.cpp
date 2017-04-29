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
};


Word getWordFromText( void )
{
    Word word ;
    // to define...
    return word ;
}

/*
 * Abordar la definición de "process"
 */
void process ( const Word& word )
{
    // Por simplicidad, en este punto elegimos como "procesamiento de una palabra"
    // la accion de mostrarla en el stdout, en nuestro caso en pantalla,

    std::cout << word << std::endl ;

    //
}

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
