#include "include/data_handle.h"

bool FreeVector(std::vector<u8>* vector) {
    delete vector;
    return true;
}

void FillData(std::vector<u8>* vector, u8** dst, u32* dst_len) {
    *dst = vector->data();
    *dst_len = vector->size();
}