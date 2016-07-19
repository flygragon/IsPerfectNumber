#pragma once
class JudgePerfectNumber {
public:
	bool isPerfectSquare(int num) {
		int sum(0);
		for (int i = 1; num >0; i += 2)
			num -= i;
		return num == 0;
	}
};