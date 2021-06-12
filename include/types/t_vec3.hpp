#ifndef GLHOM_T_VEC3
#define GLHOM_T_VEC3

#include "../common/generic.hpp"

namespace hom
{
template <typename T>
struct Vec<3u, T>
{
    union
    {
        struct { T x, y, z; };
        struct { T r, g, b; };
        struct { T s, t, p; };
    };
};

} // namespace hom

#endif // GLHOM_T_VEC3
