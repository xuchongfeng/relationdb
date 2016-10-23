//
// Created by FlyFish on 10/22/16.
//

#ifndef RELATIONDB_PF_ERROR_H
#define RELATIONDB_PF_ERROR_H


namespace db {

    enum {
        PF_EOF = 0,
        PF_PAGEPINNED,
        PF_PAGENOTINBUF,
        PF_PAGEUNPINNED,
        PF_PAGEFREE,
        PF_INVALIDPAGE,
        PF_FILEOPEN,
        PF_CLOSEDFILE,


        PF_NOMEME,
        PF_NOBUF,
        PF_INCOMPLETEREAD,
        PF_INCOMPLETEWRITE,
        PF_HDRREAD,
        PF_HDRWRITE,

        PF_PAGEINBUF,
        PF_HASHNOTFOUND,
        PF_HASHPAGEEXIST,
        PF_INVALIDNAME,
        PF_UNIX,

    };
}

#endif //RELATIONDB_PF_ERROR_H
