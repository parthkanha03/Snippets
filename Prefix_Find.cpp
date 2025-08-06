std::string strs[] = {"apple", "apricot", "banana"};
std::string prefix = "ap";

for (int i = 0; i < 3; ++i) {
    if (strs[i].find(prefix) != 0) {
        // This string does NOT start with "ap"
        std::cout << strs[i] << " does not start with " << prefix << std::endl;
    }
}
