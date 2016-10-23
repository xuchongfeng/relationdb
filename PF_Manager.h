//
// Created by FlyFish on 10/22/16.
//

#ifndef RELATIONDB_PF_MANAGER_H
#define RELATIONDB_PF_MANAGER_H

namespace db {

    const int PF_PAGE_SIZE = 4096;
    const int PF_BUFFER_SIZE = 40;

    typedef int RC;

    class PF_Manager {
    public:
        PF_Manager();
        ~PF_Manager();

        RC CreateFile(const char* fileName);
        RC DestroyFile(const char* fileName);
        RC OpenFile(const char* fileName, PF_FileHandle &fileHandler);

        RC CloseFile(PF_FileHandle &fileHandle);
        RC AllocateBlock(char * &buffer);
        RC DisposeBlock(char *buffer);
    };


}

#endif //RELATIONDB_PF_MANAGER_H
