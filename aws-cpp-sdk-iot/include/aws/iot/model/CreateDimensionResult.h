﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class AWS_IOT_API CreateDimensionResult
  {
  public:
    CreateDimensionResult();
    CreateDimensionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDimensionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline CreateDimensionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline CreateDimensionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline CreateDimensionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN (Amazon resource name) of the created dimension.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN (Amazon resource name) of the created dimension.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN (Amazon resource name) of the created dimension.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN (Amazon resource name) of the created dimension.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN (Amazon resource name) of the created dimension.</p>
     */
    inline CreateDimensionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN (Amazon resource name) of the created dimension.</p>
     */
    inline CreateDimensionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon resource name) of the created dimension.</p>
     */
    inline CreateDimensionResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws