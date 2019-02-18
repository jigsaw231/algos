#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

int linearSearch(auto data, auto key)
{
	for(int i = 0; i < data.size() ; i++)
	{
		if ( data[i] == key)
		{
			return i ;
		}
	}
	return -1;
}
