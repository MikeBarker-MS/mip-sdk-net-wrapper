/**
 *
 * Copyright (c) Microsoft Corporation.
 * All rights reserved.
 *
 * This code is licensed under the MIT License.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files(the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions :
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */
/**
 * @brief Defines Roles static helper class
 * 
 * @file roles.h
 */

#ifndef API_MIP_RMS_ROLES_H_
#define API_MIP_RMS_ROLES_H_

#include <string>

#include "mip/mip_export.h"

namespace mip {
/**
 * @brief Defines roles for protecting data
 */
class Roles {
public:
  /**
   * @brief Gets string identifier for 'viewer' role
   * 
   * @return String identifier for 'viewer' role
   * 
   * @note A viewer can only view the content. They cannot edit, copy, or print it.
   */
  MIP_EXPORT static const std::string Viewer();

  /**
   * @brief Gets string identifier for 'reviewer' role
   * 
   * @return String identifier for 'reviewer' role
   * 
   * @note A reviewer can view and edit the content. They cannot copy, or print it.
   */
  MIP_EXPORT static const std::string Reviewer();

  /**
   * @brief Gets string identifier for 'author' role
   * 
   * @return String identifier for 'author' role
   * 
   * @note An author can view, edit, copy, and print the content.
   */
  MIP_EXPORT static const std::string Author();

  /**
   * @brief Gets string identifier for 'co-owner' role
   * 
   * @return String identifier for 'co-owner' role
   * 
   * @note A co-owner has all permissions
   */
  MIP_EXPORT static const std::string CoOwner();
};
} // namespace mip

#endif // API_MIP_RMS_ROLES_H_
