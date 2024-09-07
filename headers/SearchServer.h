#ifndef SEARCH_SERVER_H
#define SEARCH_SERVER_H

#include "InvertedIndex.h"
#include "RelativeIndex.h"
#include <vector>
#include <string>
#include <algorithm>

class SearchServer {
public:

    SearchServer(InvertedIndex& idx) : _index(idx) { }

    std::vector<std::vector<RelativeIndex>> search(const std::vector<std::string>& queries_input);

private:
    InvertedIndex& _index;
};

#endif // SEARCH_SERVER_H
