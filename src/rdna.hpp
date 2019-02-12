#include <iostream>
#include <rand0m>

using namespace std;

string randDNA(int seed, string basese, intn)

{
	mt19937 eng1(seed);
	
	int min = 0;
	int max = bases.size()-1;
	uniform_int_distrubution<>uniform(min,max);
	int index = 0;
	string dna = " ";
	for (int i = 0; i < n; i++)
	
	{
		index = uniform(eng1);
		dna = dna + bases[index];
		
	}
	return dna;
}
