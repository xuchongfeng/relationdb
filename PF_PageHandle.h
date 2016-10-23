//
// Created by FlyFish on 10/22/16.
//

#ifndef RELATIONDB_PF_PAGEHANDLE_H
#define RELATIONDB_PF_PAGEHANDLE_H

namespace db {
    typedef unsigned int pageNum;

    class PF_PageHandle {
    public:
        PF_PageHandle();
        ~PF_PageHandle();

        PF_PageHandle(const PF_PageHandle &pageHandle);
        PF_PageHandle& operator= (const PF_PageHandle &pageHandle);

        RC GetData(char * &pData) const;
        RC GetPageNum(pageNum &pageNum) const;
    };
}




#endif //RELATIONDB_PF_PAGEHANDLE_H
