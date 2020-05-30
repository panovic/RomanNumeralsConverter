#include "RomanNumerals.h"
#include <string>
#include <stdexcept>

std::string RomanNumerals::convert(unsigned int arabic) {
	if ((arabic < MIN_ARABIC_NUMBER) || (arabic > MAX_ARABIC_NUMBER)) {
		throw std::invalid_argument{ "Out of range" };
	}

	std::string roman{ "" };
	for (auto arabicToRoman : ARABIC_TO_ROMAN_CONVERSION_TABLE) {
		while (arabic >= arabicToRoman.first) {
			roman += arabicToRoman.second;
			arabic -= arabicToRoman.first;
		}
	}
	return roman;
}