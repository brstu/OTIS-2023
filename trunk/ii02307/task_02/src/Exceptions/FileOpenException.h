#ifndef SRC_FILEOPENEXCEPTION_H
#define SRC_FILEOPENEXCEPTION_H


#include <stdexcept>
#include <string>

class FileOpenException : public std::runtime_error {
public:
    explicit FileOpenException(const std::string& filename);

    [[nodiscard]] const std::string& getFilename() const noexcept;

private:
    std::string filename;
};


#endif