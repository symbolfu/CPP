#include<iostream>
#include"table.h"

// 有什么好处？
TableTennisisPlayer::TableTennisisPlayer(const string& fn,
	const string& ln, bool ht) : firstname(fn), lastname(ln), hasTable(ht) {}

void TableTennisisPlayer::Name() const
{
	std::cout << lastname << " , " << firstname;
}


RatedPlayer::RatedPlayer(unsigned int r, const string& fn,
	const string& ln, bool ht) : TableTennisisPlayer(fn, ln, ht), rating(r)
{ }

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisisPlayer& tp)
	: TableTennisisPlayer(tp), rating(r)
{ }
