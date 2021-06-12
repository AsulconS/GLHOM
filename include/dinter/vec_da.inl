namespace hom
{
// Adition Operators

template <uint32 S, typename T>
inline Vec<S, T>& operator+=(Vec<S, T>& l, const Vec<S, T>& r)
{
    for(uint32 i {0}; i < S; ++i)
        ((T*)&l)[i] += ((const T*)&r)[i];
    return l;
}

template <uint32 S, typename T>
inline Vec<S, T>& operator+=(Vec<S, T>& l, const T& r)
{
    for(uint32 i {0}; i < S; ++i)
        ((T*)&l)[i] += r;
    return l;
}

template <uint32 S, typename T>
inline Vec<S, T> operator+(const Vec<S, T>& l, const Vec<S, T>& r)
{
    Vec<S, T> result;
    for(uint32 i {0}; i < S; ++i)
        ((T*)&result)[i] = ((const T*)&l)[i] + ((const T*)&r)[i];
    return result;
}

template <uint32 S, typename T>
inline Vec<S, T> operator+(const Vec<S, T>& l, const T& r)
{
    Vec<S, T> result;
    for(uint32 i {0}; i < S; ++i)
        ((T*)&result)[i] = ((const T*)&l)[i] + r;
    return result;
}

template <uint32 S, typename T>
inline Vec<S, T> operator+(const T& l, const Vec<S, T>& r)
{
    Vec<S, T> result;
    for(uint32 i {0}; i < S; ++i)
        ((T*)&result)[i] = l + ((const T*)&r)[i];
    return result;
}

// Subtraction Operators

template <uint32 S, typename T>
inline Vec<S, T>& operator-=(Vec<S, T>& l, const Vec<S, T>& r)
{
    for(uint32 i {0}; i < S; ++i)
        ((T*)&l)[i] -= ((const T*)&r)[i];
    return l;
}

template <uint32 S, typename T>
inline Vec<S, T>& operator-=(Vec<S, T>& l, const T& r)
{
    for(uint32 i {0}; i < S; ++i)
        ((T*)&l)[i] -= r;
    return l;
}

template <uint32 S, typename T>
inline Vec<S, T> operator-(const Vec<S, T>& l, const Vec<S, T>& r)
{
    Vec<S, T> result;
    for(uint32 i {0}; i < S; ++i)
        ((T*)&result)[i] = ((const T*)&l)[i] - ((const T*)&r)[i];
    return result;
}

template <uint32 S, typename T>
inline Vec<S, T> operator-(const Vec<S, T>& l, const T& r)
{
    Vec<S, T> result;
    for(uint32 i {0}; i < S; ++i)
        ((T*)&result)[i] = ((const T*)&l)[i] - r;
    return result;
}

template <uint32 S, typename T>
inline Vec<S, T> operator-(const T& l, const Vec<S, T>& r)
{
    Vec<S, T> result;
    for(uint32 i {0}; i < S; ++i)
        ((T*)&result)[i] = l - ((const T*)&r)[i];
    return result;
}

// Multiplication Operators

template <uint32 S, typename T>
inline Vec<S, T>& operator*=(Vec<S, T>& l, const T& r)
{
    for(uint32 i {0}; i < S; ++i)
        ((T*)&l)[i] *= r;
    return l;
}

template <uint32 S, typename T>
inline Vec<S, T> operator*(const Vec<S, T>& l, const T& r)
{
    Vec<S, T> result;
    for(uint32 i {0}; i < S; ++i)
        ((T*)&result)[i] = ((const T*)&l)[i] * r;
    return result;
}

template <uint32 S, typename T>
inline Vec<S, T> operator*(const T& l, const Vec<S, T>& r)
{
    Vec<S, T> result;
    for(uint32 i {0}; i < S; ++i)
        ((T*)&result)[i] = l * ((const T*)&r)[i];
    return result;
}

// Division Operators

template <uint32 S, typename T>
inline Vec<S, T>& operator/=(Vec<S, T>& l, const T& r)
{
    for(uint32 i {0}; i < S; ++i)
        ((T*)&l)[i] /= r;
    return l;
}

template <uint32 S, typename T>
inline Vec<S, T> operator/(const Vec<S, T>& l, const T& r)
{
    Vec<S, T> result;
    for(uint32 i {0}; i < S; ++i)
        ((T*)&result)[i] = ((const T*)&l)[i] / r;
    return result;
}

template <uint32 S, typename T>
inline Vec<S, T> operator/(const T& l, const Vec<S, T>& r)
{
    Vec<S, T> result;
    for(uint32 i {0}; i < S; ++i)
        ((T*)&result)[i] = l / ((const T*)&r)[i];
    return result;
}

// Dot Product

template <uint32 S, typename T>
inline T operator*(const Vec<S, T>& l, const Vec<S, T>& r)
{
    T result {static_cast<T>(0)};
    for(uint32 i {0}; i < S; ++i)
        result += ((const T*)&l)[i] * ((const T*)&r)[i];
    return result;
}

// Unary Operators

template <uint32 S, typename T>
inline Vec<S, T> operator+(const Vec<S, T>& l)
{
    return l;
}

template <uint32 S, typename T>
inline Vec<S, T> operator-(const Vec<S, T>& l)
{
    return static_cast<T>(-1) * l;
}

} // namespace hom
