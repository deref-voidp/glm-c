#ifndef GLM_EXT_VECTOR_UINT4_H
#define GLM_EXT_VECTOR_UINT4_H

#include "../detail/type_vec.h"
#include "../detail/type_vec4.h"

#define glm_uvec4(...) glm_tvec4(uint, defaultp, __VA_ARGS__)

#include "vector_bool4.h"

#include "../detail/namespace_begin.c"
#include "vector_uint4.c"
#include "../detail/namespace_end.c"

#endif /* GLM_EXT_VECTOR_UINT4_H */