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

void process ( const Word& word )
{
    // to define...
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
