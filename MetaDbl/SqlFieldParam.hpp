#ifndef _METADBL_SQLFIELDPARAM_HPP_
#define _METADBL_SQLFIELDPARAM_HPP_

#include "MetaDbl/CoreInclude.hpp"

#include "MetaDbl/SqlDefine.hpp"

DECL_NAMESPACE_METADBL_BEGIN

struct SqlFieldParam {

    SqlType m_sqlType = SQLTYPE_NONE;
    char* m_buffer = nullptr;
    int m_length = 0;

    unsigned long m_acturalLength = 0;
    my_bool m_isNull = 0;
    my_bool m_isUnsigned = 0;
    my_bool m_error = 0;
};

DECL_NAMESPACE_METADBL_END

#endif // _METADBL_SQLFIELDPARAM_HPP_
