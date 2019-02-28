#include <iostream>
#include <string>
#include <random>

using namespace std;

string randDNA(int seed, string bases, int n){
	if( bases ==""){
		return "";
	}
	std::mt19937 eng1(seed);
	int max = bases.size()-1;
	int min = 0;
	uniform_int_distribution<>uform(min,max);
	string dna="";
	int randnum=0;
	for( int i=0;i < n;i++){
		randnum = uform(eng1);
		dna =dna + bases[randnum];
	}
	
		return dna;
	}
