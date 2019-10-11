#include "RandomNumArray.h"

using namespace std;

RandomNumArray::RandomNumArray(int count, int range_left, int range_right)
{
	//allocate space (sizeof(int)*count)
	this->parray = new int[count];
	this->arraysize = count;
	
	srand((int)time(0)); 
	
	for (int i = 0; i < count; i++)
    {
        this->parray[i] = (rand()%(range_right-range_left+1))+range_left;
    }
}

RandomNumArray::~RandomNumArray()
{

}

void print_array()
{
	for (int i=0; i<this->arraysize; i++)
	{
		cout << this->parray[i] << " ";
	}
	
	cout << endl;
}