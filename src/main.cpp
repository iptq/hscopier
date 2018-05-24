#include <fstream>
#include <iostream>
#include <streambuf>
#include <string>

#include "osu/beatmap/set.hpp"
#include "osu/osz/beatmapparser.hpp"

int main(int argc, char **argv) {
    std::ifstream f(argv[1]);
    std::string contents((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    f.close();

    // std::cout << contents << std::endl;
    osu::BeatmapSet *s = osu::readString(contents);
}
