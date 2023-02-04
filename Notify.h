#pragma once

#include <iostream>

using namespace std;

class Notify
{
private:
	string data;

public:

	Notify(string _data = "None") : data(_data) {}
	string GetTextData();
	void ClearData();
};

