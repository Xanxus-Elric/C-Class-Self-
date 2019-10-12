#ifndef INSERTIONSORTINGWORKER_H
#define INSERTIONSORTINGWORKER_H

#include <iostream>
using namespace std;

class InsertionSortingWorker
{
    public:
        InsertionSortingWorker();
        ~InsertionSortingWorker();

        void AscendingSorting(int *parr, int arraysize);
        void DescendingSorting(int *parr, int arraysize);

    protected:

    private:
};

#endif // INSERTIONSORTINGWORKER_H
