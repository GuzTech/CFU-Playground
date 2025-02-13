/*
 * Copyright 2021 The CFU-Playground Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BLOCKS_TEST_H
#define _BLOCKS_TEST_H

#ifdef __cplusplus
extern "C" {
#endif

// Tests the multiply-accumulate function
void do_test_blocks_multiply_accumulate(void);

// Runs all the tests
void do_test_blocks_all(void);

#ifdef __cplusplus
}
#endif
#endif  // _BLOCKS_TEST_H
