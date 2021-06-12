#ifndef GLHOM_T_MAT2
#define GLHOM_T_MAT2

#include "../common/generic.hpp"

namespace hom
{
template <typename T>
struct Mat<2u, 2u, T>
{
    T data[4];
};

} // namespace hom

#endif // GLHOM_T_MAT2
