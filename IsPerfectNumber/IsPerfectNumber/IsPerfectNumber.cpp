// IsPerfectNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"IsPerfectNumber.h"
#include<iostream>
using namespace std;

int main()
{
	int n(0);
	cin >> n;
	JudgePerfectNumber Judge;
	if (Judge.isPerfectSquare(n))
		cout << n << " is a Perfect Number" <<'\n';
	else cout << n << " isn't a Perfect Number" <<'\n';
	exit(0);
    return 0;
}

