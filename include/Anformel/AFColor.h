#ifndef Anformel_AFColor_h
#define Anformel_AFColor_h

#include "coreHezelnut/chn_types.h"


struct af_color {
    CHNUInteger pixel;

    CHNUint16    red;
    CHNUint16    green;
    CHNUint16    blue;
};


typedef struct af_color* AFColor_ref;


//#define AF_ASCOLOR(_self_)       ((AFColor_ref)_self_)


/*!
 * red、green、blue から AFColor のインスタンスを生成して返します。
 *
 * \param red   [in] 赤成分。
 * \param green [in] 緑成分。
 * \param blue  [in] 青成分。
 *
 * \return 新しい AFColor のインスタンス。
 */
AFColor_ref AFColor_new(CHNUint16 red, CHNUint16 green, CHNUint16 blue);


/*!
 * spec から AFColor のインスタンスを生成して返します。
 */
AFColor_ref AFColor_parse(CString_ref spec);


/*!
 *
 */
AFColor_ref AFColor_parseWithString(CHNString_ref spec);


/*!
 *
 */
CHNBoolean AFColor_tryParse(CString_ref spec, AFColor_ref placeholder);


/*!
 *
 */
void AFColor_free(AFColor_ref self);


/*!
 *
 */
AFColor_ref AFColor_copy(AFColor_ref a_color);


/*!
 *
 */
AFColor_ref AFColor_assign(AFColor_ref self, CHNUint16 red, CHNUint16 green, CHNUint16 blue);


/*!
 *
 */
CHNHashCode AFColor_hash(AFColor_ref self);



#endif  /* Anformel_AFColor_h */
// Local Variables:
//   coding: utf-8
// End:
