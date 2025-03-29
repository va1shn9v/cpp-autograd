#include <iostream>

template<typename T>
class Tensor{
    public:
    int32_t height;
    int32_t width;
    T grad;

    T transpose() const
}