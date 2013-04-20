#include "config.h"

#include "coreHezelnut/CHNZone.h"

#include "Anformel/AFColor.h"



AFColor_ref AFColor_new(CHNUint16 red, CHNUint16 green, CHNUint16 blue)
{
    AFColor_ref new;

    new = CHNZone_alloc( sizeof(struct af_color) );

    new->pixel = (sizeof(CHNUint16) * 8)  * 3;
    new->red = red;
    new->green = green;
    new->blue = blue;

    return new;
}


AFColor_ref AFColor_parse(CString_ref spec)
{
    AFColor_ref new = NULL;
    /*
      どういう文字列なんだろ？
     */
    return new;
}


AFColor_ref AFColor_parseWithString(CHNString_ref spec)
{
    AFColor_ref new = NULL;
    /*
      どういう文字列なんだろ？
     */
    return new;
}


CHNBoolean AFColor_tryParse(CString_ref spec, AFColor_ref placeholder)
{
    AFColor_ref new = NULL;
    /*
      どういう文字列なんだろ？
     */
    return FALSE;
}


void AFColor_free(AFColor_ref self)
{
    CHNZone_free( self );
}


AFColor_ref AFColor_copy(AFColor_ref a_color)
{
    AFColor_ref other;

    other = CHNZone_alloc( sizeof(struct af_color) );

    AFColor_assign( other,
                    a_color->red,
                    a_color->green,
                    a_color->blue );

    return other;
}


AFColor_ref AFColor_assign(AFColor_ref self, CHNUint16 red, CHNUint16 green, CHNUint16 blue)
{
    self->pixel = (sizeof(CHNUint16) * 8)  * 3;
    self->red = red;
    self->green = green;
    self->blue = blue;

    return self;
}


CHNHashCode AFColor_hash(AFColor_ref self)
{
    return self->red
        + ( self->green << 11 )
        + ( self->blue << 22 )
        + ( self->blue >> 6 );
}
