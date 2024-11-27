#include <ExampleHeaderOnlyLibrary.h>

#include <iostream>

int main() {
    auto value = get_example_header_only_library_value();
    std::cout << "Value: " << value << std::endl;
    return 0;
}