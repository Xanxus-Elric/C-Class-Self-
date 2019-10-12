#ifndef SHELLSORTINGWORKER_H
#define SHELLSORTINGWORKER_H

#include <iostream>
using namespace std;

class ShellSortingWorker
{
    public:
        ShellSortingWorker();
        ~ShellSortingWorker();

        void AscendingSorting(int *parr, int arraysize);
        void DescendingSorting(int *parr, int arraysize);

    protected:

    private:
};

#endif // SHELLSORTINGWORKER_H
