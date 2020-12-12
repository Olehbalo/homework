#pragma once
#include <iostream>

#include <string>
using namespace std;
class Candidate
{
public:
	int amount_of_votes;
	string surname;
	Candidate() {};
	~Candidate() {};
};


class Elections
{
	double sum_of_votes = 0;
public:
	int array_size = 5;
	Candidate applicants[array_size];
	Elections() {};
	~Elections() {};
	void set_candidate();
	void get_candidate();
	void winner();
};