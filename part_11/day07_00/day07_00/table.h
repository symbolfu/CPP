#pragma once


#include<string>
using std::string;

class TableTennisisPlayer
{
private:
	string firstname;
	string lastname;
	bool hasTable;

public:
	TableTennisisPlayer(const string& fn = "none",
		const string& ln = "none", bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; }
	void ResetTable(bool v) { hasTable = v; }
};


class RatedPlayer :public TableTennisisPlayer
{
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const string& fn = "none",
		const string& ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisisPlayer& tp);

	unsigned int Rating() const { return rating; }
	void ResetRating(unsigned int r) { rating = r; }
};