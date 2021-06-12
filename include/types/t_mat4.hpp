#ifndef GLHOM_T_MAT4
#define GLHOM_T_MAT4

#include "../common/generic.hpp"

namespace hom
{
template <typename T>
struct Mat<4u, 4u, T>
{
    T data[16];
};

} // namespace hom

#endif // GLHOM_T_MAT4
