#ifndef GLHOM_T_VEC4
#define GLHOM_T_VEC4

#include "../common/generic.hpp"

namespace hom
{
template <typename T>
struct Vec<4u, T>
{
    union
    {
        struct { T x, y, z, w; };
        struct { T r, g, b, a; };
        struct { T s, t, p, q; };
    };
};

} // namespace hom

#endif // GLHOM_T_VEC4
