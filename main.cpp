#include <iostream>

    /*
     * microiteración 0.1 begin
     *  resolvemos: #plain "Word" tipo desconocido
     *
     *  justificación:
     *      "Resolucion de problemas"
     *      "Abstracción", mapeo de abstracciones entre
     *          espacio del problema -> espacio de la solución, gap semántico
     *      "Abstracción" abstracción de objeto(cosa) -> sustantivo -> Tipo, instancia
     *      "Lenguaje de programación C++", 4.1 , 5.7.
     *
     */

struct Word
{
    /* microiteration 0.2, begin.
     * resolvemos "No member named 'isNull' in 'Word'"
     *
     * Justificacion:
     * "Abstracción", abstracción de comportamiento -> verbo -> funcion
     *
     */
    bool isNull( void )
    {
        bool result = true ;
        // to define...
        return result ;
    }
    // microiteration 0.2, end
};

    //microiteración 0.1 end.

int main( int argc , const char * argv[] )
{
    /*
     * Dado un texto que termina con un punto. Construir una lista de palabras
     * y su frecuencia (veces que la palabra aparece en el texto).
     * El texto se procesa caracter a caracter.
     *
     * approach #1, un planteo posible...
     *      1.- mientras haya una palabra en el texto.
     *      2.- obtener la palabra
     *      3.- procesar la palabra
     *
     * justificación,
     *      "resolución de problemas".
     *      (Blum&Niss, Comfrey, Polya y otros)
     *
     * luego ;
     *      Sea palabra una Palabra ;
     *      palabra <- obtenerUnaPalabraDelTexto ;
     *      mientras ( ( palabra no sea la palabra nula ) )
     *      // (palabra nula => ausencia de palabra )
     *      {
     *          procesar( palabra ) ;
     *          palabra <- obtenerUnaPalabraDelTexto ;
     *      }
     *
     *
     */
    Word word ;
    word = getWordFromText() ;
    while ( !( word.isNull() ) )
    {
        process( word ) ;
        word = getWordFromText() ;
    }
    /*
     * Compiler semantic issue...
     *  issue: a matter that is in dispute between two or
     *      more parties (Merriam-Webster).
     *  semantic: of or relating to the meanings of words
     *      and phrases (Merriam-Webster).
     *
     *  ~= controversia relativa al significado de algunas palabras.
     *    (entre el compilador y el autor del código.
     */
    return 0;
}
