// Copyright (c) 2015, Dean ChaoJun Pan.  All rights reserved.
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#ifndef GO_ROCKSDB_INCLUDE_METADATA_H_
#define GO_ROCKSDB_INCLUDE_METADATA_H_

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

DEFINE_C_WRAP_STRUCT(ColumnFamilyMetaData)
DEFINE_C_WRAP_CONSTRUCTOR_DEC(ColumnFamilyMetaData)
DEFINE_C_WRAP_DESTRUCTOR_DEC(ColumnFamilyMetaData)

DEFINE_C_WRAP_STRUCT(LiveFileMetaData)
DEFINE_C_WRAP_CONSTRUCTOR_DEC(LiveFileMetaData)
DEFINE_C_WRAP_DESTRUCTOR_DEC(LiveFileMetaData)
DEFINE_C_WRAP_DESTRUCTOR_ARRAY_DEC(LiveFileMetaData)

#ifdef __cplusplus
}  /* end extern "C" */
#endif

#endif  // GO_ROCKSDB_INCLUDE_METADATA_H_
