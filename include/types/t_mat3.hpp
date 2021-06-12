#ifndef GLHOM_T_MAT3
#define GLHOM_T_MAT3

#include "../common/generic.hpp"

namespace hom
{
template <typename T>
struct Mat<3u, 3u, T>
{
    T data[9];
};

} // namespace hom

#endif // GLHOM_T_MAT3
