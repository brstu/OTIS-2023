#ifndef SRC_FILEOPENEXCEPTION_H
#define SRC_FILEOPENEXCEPTION_H


#include <stdexcept>
#include <string>

class FileOpenException : public std::runtime_error {
public:
    FileOpenException(const std::string& filename);

    const char* what() const noexcept override;
    const std::string& getFilename() const noexcept;

private:
    std::string filename;
};


#endif
