#pragma once
#include <string>
//#include <vector>

namespace RomanNumerals {
	const auto MIN_ARABIC_NUMBER = 1u;
	const auto MAX_ARABIC_NUMBER = 3999u;
	//const auto OUT_OF_RANGE_ERROR_MESSAGE{ std::format("Out of range [{},{}]", MIN_ARABIC_NUMBER, MAX_ARABIC_NUMBER) }; // c++20
	const auto OUT_OF_RANGE_ERROR_MESSAGE{ "Out of range [" + std::to_string(MIN_ARABIC_NUMBER) + "," + std::to_string(MAX_ARABIC_NUMBER) + "]" };

	// const std::vector<std::pair<unsigned int, std::string>> ARABIC_TO_ROMAN_CONVERSION_TABLE = {
	const auto ARABIC_TO_ROMAN_CONVERSION_TABLE = {
		std::make_pair(1000u, "M"),
		std::make_pair(900u, "CM"),
		std::make_pair(500u, "D"),
		std::make_pair(400u, "CD"),
		std::make_pair(100u, "C"),
		std::make_pair(90u, "XC"),
		std::make_pair(50u, "L"),
		std::make_pair(40u, "XL"),
		std::make_pair(10u, "X"),
		std::make_pair(9u, "IX"),
		std::make_pair(5u, "V"),
		std::make_pair(4u, "IV"),
		std::make_pair(1u, "I")
	};

	std::string convert(unsigned int arabic);
};
