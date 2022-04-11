#include <array>
#include <chrono>
#include <cstddef>
#include <cstdio>
#include <cxxopts.hpp>
#include <filesystem>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char* argv[])
{
    cxxopts::Options options("asm-format FILE...",
        "Reformats asm `8086` source code\n");

    options.add_options() //
        ("h,help", "Display help menu") //
        ("v,verbose", "Turn on verbose mode", cxxopts::value<bool>()) //
        ("i,in-place", "Reformats in-place", cxxopts::value<bool>()) //
        ("version", "Display version") //
        ("c,config", "Style config file", cxxopts::value<string>()); //

    auto result = options.parse(argc, argv);

    if (result.count("help")) {
        printf("%s\n", options.help().c_str());
        exit(0);
    } else if (result.count("")) {
        exit(0);
    }
}
