// Copyright (c) 2015, Dean ChaoJun Pan.  All rights reserved.
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#ifndef GO_ROCKSDB_INCLUDE_OPTIONS_H_
#define GO_ROCKSDB_INCLUDE_OPTIONS_H_

#ifdef __cplusplus
#include <rocksdb/options.h>
using namespace rocksdb;
#endif

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

DEFINE_C_WRAP_STRUCT(ColumnFamilyOptions)
DEFINE_C_WRAP_STRUCT(DBOptions)
DEFINE_C_WRAP_STRUCT(Options)
DEFINE_C_WRAP_STRUCT(ReadOptions)
DEFINE_C_WRAP_STRUCT(WriteOptions)
DEFINE_C_WRAP_STRUCT(FlushOptions)
DEFINE_C_WRAP_STRUCT(CompactionOptions)

DEFINE_C_WRAP_CONSTRUCTOR_DEC(ColumnFamilyOptions)
DEFINE_C_WRAP_CONSTRUCTOR_ARGS_DEC(ColumnFamilyOptions, Options)
DEFINE_C_WRAP_CONSTRUCTOR_DEFAULT_DEC(ColumnFamilyOptions)
DEFINE_C_WRAP_DESTRUCTOR_DEC(ColumnFamilyOptions)

DEFINE_C_WRAP_CONSTRUCTOR_DEC(DBOptions)
#ifdef __cplusplus
DEFINE_C_WRAP_CONSTRUCTOR_RAW_ARGS_DEC(DBOptions, const Options&)
#endif
DEFINE_C_WRAP_CONSTRUCTOR_DEFAULT_DEC(DBOptions)
DEFINE_C_WRAP_DESTRUCTOR_DEC(DBOptions)

DEFINE_C_WRAP_CONSTRUCTOR_DEC(Options)
DEFINE_C_WRAP_CONSTRUCTOR_ARGS_DEC(Options, DBOptions, ColumnFamilyOptions)
#ifdef __cplusplus
DEFINE_C_WRAP_CONSTRUCTOR_RAW_ARGS_DEC(Options, const DBOptions&, const ColumnFamilyOptions&)
#endif
DEFINE_C_WRAP_CONSTRUCTOR_DEFAULT_DEC(Options)
DEFINE_C_WRAP_DESTRUCTOR_DEC(Options)

DEFINE_C_WRAP_CONSTRUCTOR_DEC(ReadOptions)
#ifdef __cplusplus
DEFINE_C_WRAP_CONSTRUCTOR_RAW_ARGS_DEC(ReadOptions, bool, bool)
#endif
DEFINE_C_WRAP_CONSTRUCTOR_DEFAULT_DEC(ReadOptions)
DEFINE_C_WRAP_DESTRUCTOR_DEC(ReadOptions)

DEFINE_C_WRAP_CONSTRUCTOR_DEC(WriteOptions)
DEFINE_C_WRAP_CONSTRUCTOR_DEFAULT_DEC(WriteOptions)
DEFINE_C_WRAP_DESTRUCTOR_DEC(WriteOptions)

DEFINE_C_WRAP_CONSTRUCTOR_DEC(FlushOptions)
DEFINE_C_WRAP_CONSTRUCTOR_DEFAULT_DEC(FlushOptions)
DEFINE_C_WRAP_DESTRUCTOR_DEC(FlushOptions)

DEFINE_C_WRAP_CONSTRUCTOR_DEC(CompactionOptions)
DEFINE_C_WRAP_CONSTRUCTOR_DEFAULT_DEC(CompactionOptions)
DEFINE_C_WRAP_DESTRUCTOR_DEC(CompactionOptions)


#ifdef __cplusplus
}  /* end extern "C" */
#endif

#endif  // GO_ROCKSDB_INCLUDE_OPTIONS_H_
