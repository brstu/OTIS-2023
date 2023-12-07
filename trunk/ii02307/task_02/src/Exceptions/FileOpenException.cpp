#include "FileOpenException.h"
FileOpenException::FileOpenException(const std::string& filename)
        : runtime_error("Cannot open the " + filename + " file."), filename(filename) {}


const std::string& FileOpenException::getFilename() const noexcept {
return filename;
}