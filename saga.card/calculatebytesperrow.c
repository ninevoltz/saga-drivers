/*
    Copyright 2016, Jason S. McMullan <jason.mcmullan@gmail.com>
    Licensed under the MIT (Expat) license. �
*/

#include <aros/libcall.h>

#include "saga_intern.h"

/*****************************************************************************

    NAME */
        AROS_UFH3(ULONG, CalculateBytesPerRow,

/*  SYNOPSIS */
        AROS_UFHA(struct BoardInfo *, bi, A0),
        AROS_UFHA(UWORD, width, D0),
        AROS_UFHA(RGBFTYPE, RGBFormat, D7))

/*  FUNCTION

    INPUTS

    RESULT

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO

    INTERNALS

    HISTORY

*****************************************************************************/
{
    AROS_LIBFUNC_INIT

    debug("Width=%ld, RGBFormat=%ld", width, RGBFormat);

    return format2bpp(RGBFormat) * width;

    AROS_LIBFUNC_EXIT
}

