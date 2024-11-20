#pragma once

#include <cstdint>
#include <cstddef>

namespace one {

/// @brief 8-bit符号付き整数型
using int8 = std::int8_t;

/// @brief 16-bit符号付き整数型
using int16 = std::int16_t;

/// @brief 32-bit符号付き整数型
using int32 = std::int32_t;

/// @brief 64-bit符号付き整数型
using int64 = std::int64_t;

/// @brief 8-bit符号無し整数型
using uint8 = std::uint8_t;

/// @brief 16-bit符号無し整数型
using uint16 = std::uint16_t;

/// @brief 32-bit符号無し整数型
using uint32 = std::uint32_t;

/// @brief 64-bit符号無し整数型
using uint64 = std::uint64_t;

/// @brief 32-bit浮動小数点数型
using float32 = float;

/// @brief 64-bit浮動小数点数型
using float64 = double;

/// @brief 符号付きサイズ型
using isize = std::ptrdiff_t;

/// @brief 符号無しサイズ型
using usize = std::size_t;

/// @brief UTF-8文字型
using char8 = char8_t;

/// @brief UTF-16文字型
using char16 = char16_t;

/// @brief UTF-32文字型
using char32 = char32_t;

/// @brief ワイド文字型
using wchar = wchar_t;

} // namespace one
