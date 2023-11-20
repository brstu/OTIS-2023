#include "FileOpenException.h"
FileOpenException::FileOpenException(const std::string& filename)
        : runtime_error("Cannot open the " + filename + " file."), filename(filename) {}

const char* FileOpenException::what() const noexcept {
    return runtime_error::what();
}

const std::string& FileOpenException::getFilename() const noexcept {
    return filename;
}