#ifndef RELATIVE_INDEX_H
#define RELATIVE_INDEX_H

#include <cstddef>

struct RelativeIndex {
    size_t doc_id;
    float rank;

    bool operator==(const RelativeIndex& other) const {
        return doc_id == other.doc_id && rank == other.rank;
    }
};

#endif // RELATIVE_INDEX_H
