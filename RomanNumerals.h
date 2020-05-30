#pragma once
#include <string>

using namespace std;

namespace RomanNumerals {
	const unsigned int MIN_ARABIC_NUMBER = 1;
	const unsigned int MAX_ARABIC_NUMBER = 3999;
	const auto ARABIC_TO_ROMAN_CONVERSION_TABLE = {
		make_pair(1000u, "M"),
		make_pair(900u, "CM"),
		make_pair(500u, "D"),
		make_pair(400u, "CD"),
		make_pair(100u, "C"),
		make_pair(90u, "XC"),
		make_pair(50u, "L"),
		make_pair(40u, "XL"),
		make_pair(10u, "X"),
		make_pair(9u, "IX"),
		make_pair(5u, "V"),
		make_pair(4u, "IV"),
		make_pair(1u, "I")
	};

	string convert(unsigned int arabic);
};
