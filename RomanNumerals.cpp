#include "RomanNumerals.h"
#include <stdexcept>

string RomanNumerals::convert(unsigned int arabic) {
	if ((arabic < MIN_ARABIC_NUMBER) || (arabic > MAX_ARABIC_NUMBER)) {
		throw invalid_argument{ "Out of range" };
	}

	string roman{ "" };
	for (auto arabicToRoman : ARABIC_TO_ROMAN_CONVERSION_TABLE) {
		while (arabic >= arabicToRoman.first) {
			roman += arabicToRoman.second;
			arabic -= arabicToRoman.first;
		}
	}
	return roman;
}