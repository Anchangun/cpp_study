#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void traverse_directory(const fs::path& path) {
    for (const auto& entry : fs::directory_iterator(path)) {
        if (entry.is_directory()) {
            std::cout << "Directory: " << entry.path() << std::endl;
            traverse_directory(entry.path());
        }
        else {
            std::cout << "File: " << entry.path() << std::endl;
        }
    }
}

int main() {

    fs::path path_to_traverse = "Directory";
    traverse_directory(path_to_traverse);
    return 0;
}