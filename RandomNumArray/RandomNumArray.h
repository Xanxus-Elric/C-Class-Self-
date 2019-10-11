#ifndef RANDOMNUMARRAY_H
#define RANDOMNUMARRAY_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class RandomNumArray
{
	public:
		RandomNumArray(int count, int range_left, int range_right);
		~RandomNumArray();
		
		int *parray;
		int arraysize;
		
		void print_array();
		
	private:
	
	protected:

};

#endif // RANDOMNUMARRAY_H