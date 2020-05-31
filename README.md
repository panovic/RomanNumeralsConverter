# Roman Numerals Converter
## Code Kata
Write a function that takes an [Arabic number](https://en.wikipedia.org/wiki/Arabic_numerals) and returns its [Roman numeral](https://en.wikipedia.org/wiki/Roman_numerals) equivalent (as a string).

## Build Instructions
Open the provided [RomanNumeralsConverter.sln](RomanNumeralsConverter.sln) project solution file in Visual Studio (note: VS Community edition would work fine). Build the project via the `Build -> Build Solution` menu item (`Ctrl+Shift+B` keyboard shortcut).

## Run Instructions
To run unit tests demonstrating the code kata solution, open the provided [RomanNumeralsConverter.sln](RomanNumeralsConverter.sln) project solution file in Visual Studio (as shown in the [Build Instructions](#build-instructions)) section). Run the unit tests via `Debug -> Start Without Debugging` menu item (`Ctrl+F5`).

## Notes
Test-Driven Development ([TDD](https://en.wikipedia.org/wiki/Test-driven_development)) and Transformation Priority Premise ([TPP](https://en.wikipedia.org/wiki/Transformation_Priority_Premise)) were used to drive the design of this code kata.

[Modern C++](https://docs.microsoft.com/en-us/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=vs-2019) and [Google Test](https://github.com/google/googletest) testing and mocking framework were used for implementation.

The main project class is [RomanNumeralsConverter.cpp](RomanNumeralsConverter.cpp) which runs unit tests demonstrating the kata. The roman numerals conversion logic is contained in the [RomanNumerals.cpp](RomanNumerals.cpp) file as a free function under the `RomanNumerals` namespace with the corresponding definition provided in the [RomanNumerals.h](RomanNumerals.h) file. The free function can easily be organized differently if needed (i.e. as a static class member).
