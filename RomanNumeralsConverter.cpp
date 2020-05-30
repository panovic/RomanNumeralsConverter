#include "gmock/gmock.h"
#include <string>
#include <stdexcept>
#include "RomanNumerals.h"

using namespace testing;
using namespace std;
using namespace RomanNumerals;

TEST(RomanNumerals, CanConvertNumbersInRange) {
	EXPECT_THAT(convert(1), Eq("I"));
	EXPECT_THAT(convert(2), Eq("II"));
	EXPECT_THAT(convert(3), Eq("III"));
	EXPECT_THAT(convert(4), Eq("IV"));
	EXPECT_THAT(convert(10), Eq("X"));
	EXPECT_THAT(convert(11), Eq("XI"));
	EXPECT_THAT(convert(12), Eq("XII"));
	EXPECT_THAT(convert(13), Eq("XIII"));
	EXPECT_THAT(convert(20), Eq("XX"));
	EXPECT_THAT(convert(5), Eq("V"));
	EXPECT_THAT(convert(50), Eq("L"));
	EXPECT_THAT(convert(80), Eq("LXXX"));
	EXPECT_THAT(convert(100), Eq("C"));
	EXPECT_THAT(convert(288), Eq("CCLXXXVIII"));
	EXPECT_THAT(convert(444), Eq("CDXLIV"));
	EXPECT_THAT(convert(500), Eq("D"));
	EXPECT_THAT(convert(999), Eq("CMXCIX"));
	EXPECT_THAT(convert(1000), Eq("M"));
	EXPECT_THAT(convert(1513), Eq("MDXIII"));
	EXPECT_THAT(convert(2020), Eq("MMXX"));
	EXPECT_THAT(convert(2999), Eq("MMCMXCIX"));
	EXPECT_THAT(convert(3447), Eq("MMMCDXLVII"));
	EXPECT_THAT(convert(3999), Eq("MMMCMXCIX"));
}

TEST(RomanNumerals, ThrowsWhenNumbersOutOfRange) {
	EXPECT_THROW(convert(0), invalid_argument);
	EXPECT_THROW(convert(4000), invalid_argument);
}

int main(int argc, char** argv) {
	InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
