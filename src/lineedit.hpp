// Line Editor v1.2 by RedCreator37
// ncurses-based version
// ------------------------------------
// lineedit.hpp - main header file
// Thu 2019-07-25
#ifndef lineedit_hpp
#define lineedit_hpp

#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <cstring>

#include <panel.h>
#include "display.hpp"

/// Represents a TextFile object
class TextFile {
private:
    std::vector<std::string> lines;
    std::string filename;
public:
    /// Constructor
    TextFile(std::vector<std::string> text_lines, std::string fname) {
        lines = std::move(text_lines);
        filename = std::move(fname);
    }

    /// Sets the lines
    void set_lines(std::vector<std::string> new_lines) {
        lines = std::move(new_lines);
    }

    /// Sets the filename
    void set_fname(std::string fname) {
        filename = std::move(fname);
    }

    /// Gets the lines
    std::vector<std::string> &get_lines() {
        return lines;
    }

    /// Gets the filename
    std::string &get_fname() {
        return filename;
    }

    /// Returns the program version string
    static std::string get_version() {
        return std::string("Line Editor v1.2 (c) RedCreator37");
    }
};

void initialize(WINDOW **windows, PANEL **panels, TextFile &file);

void loop(WINDOW **windows, TextFile &file);

void quick_listing(const std::string &filename);

#endif
