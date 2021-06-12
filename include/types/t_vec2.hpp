#ifndef GLHOM_T_VEC2
#define GLHOM_T_VEC2

#include "../common/generic.hpp"

namespace hom
{
template <typename T>
struct Vec<2u, T>
{
    union
    {
        struct { T x, y; };
        struct { T r, g; };
        struct { T s, t; };
    };
};

} // namespace hom

#endif // GLHOM_T_VEC2
