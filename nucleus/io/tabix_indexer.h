/*
 * Copyright 2019 Google LLC.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef THIRD_PARTY_NUCLEUS_IO_TABIX_INDEXER_H_
#define THIRD_PARTY_NUCLEUS_IO_TABIX_INDEXER_H_

#include "nucleus/platform/types.h"
#include "tensorflow/core/lib/core/status.h"

namespace nucleus {

// Builds a tabix index for bgzipped VCF at the specified path.
tensorflow::Status TbxIndexBuild(const string& path);

}  // namespace nucleus

#endif  // THIRD_PARTY_NUCLEUS_IO_TABIX_INDEXER_H_
