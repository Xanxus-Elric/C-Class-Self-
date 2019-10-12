#include "InsertionSortingWorker.h"

InsertionSortingWorker::InsertionSortingWorker()
{
    //ctor
}

InsertionSortingWorker::~InsertionSortingWorker()
{
    //dtor
}

void InsertionSortingWorker::AscendingSorting(int *parr, int arraysize)
{
    int i, j;

    for (i=1; i<arraysize; i++)
    {
        int temp = parr[i];
        for (j=i-1; j>=0; j--)
        {
            if (parr[j] < temp)
            {
                break;
            }

            parr[j+1] = parr[j];
        }

        parr[j+1] = temp;
    }

    cout << "Insertion Ascending Sorting Array is : ";
    for (int i=0; i<arraysize; i++)
    {
        cout << parr[i];
    }
    cout << endl;
}

void InsertionSortingWorker::DescendingSorting(int *parr, int arraysize)
{
    int i, j;

    for (i=1; i<arraysize; i++)
    {
        int temp = parr[i];
        for (j=i-1; j>=0; j--)
        {
            if (parr[j] > temp)
            {
                break;
            }

            parr[j+1] = parr[j];
        }

        parr[j+1] = temp;
    }

    cout << "Insertion Descending Sorting Array is : ";
    for (int i=0; i<arraysize; i++)
    {
        cout << parr[i];
    }
    cout << endl;
}
