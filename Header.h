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
	double sum = 0;
public:
	Candidate arre[5];
	Elections() {};
	~Elections() {};
	void set_candidate();
	void get_candidate();
	void win();
};