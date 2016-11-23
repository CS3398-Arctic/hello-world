#include <libintl.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int count = 1;
    setlocale( LC_ALL, "" );
    bindtextdomain( "hello", "/usr/share/locale" );
    textdomain( "hello" );
    printf( gettext( "Hello, world!\n" ) );
    CPPUNIT_ASSERT(1==0);
    exit(0);
}
