#include "ShellSortingWorker.h"

ShellSortingWorker::ShellSortingWorker()
{
    //ctor
}

ShellSortingWorker::~ShellSortingWorker()
{
    //dtor
}

void ShellSortingWorker::AscendingSorting(int *parr, int arraysize)
{
    int i, j, gap;
    int temp;

    for (gap=arraysize/2; gap>0; gap/=2)
    {
        for (i=gap; i<arraysize; i++)
        {
            int temp = parr[i];
            for (j=i-gap; j>=0; j-=gap)
            {
                if (parr[j] < temp)
                {
                    break;
                }

                parr[j+gap] = parr[j];
            }

            parr[j+gap] = temp;
        }
    }

    cout << "Shell Ascending Sorting Array is : ";
    for (int i=0; i<arraysize; i++)
    {
        cout << parr[i];
    }
    cout << endl;
}


void ShellSortingWorker::DescendingSorting(int *parr, int arraysize)
{
    int i, j, gap;
    int temp;

    for (gap=arraysize/2; gap>0; gap/=2)
    {
        for (i=gap; i<arraysize; i++)
        {
            int temp = parr[i];
            for (j=i-gap; j>=0; j-=gap)
            {
                if (parr[j] > temp)
                {
                    break;
                }

                parr[j+gap] = parr[j];
            }

            parr[j+gap] = temp;
        }
    }

    cout << "Shell Descending Sorting Array is : ";
    for (int i=0; i<arraysize; i++)
    {
        cout << parr[i];
    }
    cout << endl;
}
