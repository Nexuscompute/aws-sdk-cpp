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
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Includes details about how the access that generated the finding is granted.
   * This is populated for Amazon S3 bucket findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/FindingSourceDetail">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API FindingSourceDetail
  {
  public:
    FindingSourceDetail();
    FindingSourceDetail(Aws::Utils::Json::JsonView jsonValue);
    FindingSourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the access point that generated the finding.</p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }

    /**
     * <p>The ARN of the access point that generated the finding.</p>
     */
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }

    /**
     * <p>The ARN of the access point that generated the finding.</p>
     */
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = value; }

    /**
     * <p>The ARN of the access point that generated the finding.</p>
     */
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::move(value); }

    /**
     * <p>The ARN of the access point that generated the finding.</p>
     */
    inline void SetAccessPointArn(const char* value) { m_accessPointArnHasBeenSet = true; m_accessPointArn.assign(value); }

    /**
     * <p>The ARN of the access point that generated the finding.</p>
     */
    inline FindingSourceDetail& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}

    /**
     * <p>The ARN of the access point that generated the finding.</p>
     */
    inline FindingSourceDetail& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the access point that generated the finding.</p>
     */
    inline FindingSourceDetail& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}

  private:

    Aws::String m_accessPointArn;
    bool m_accessPointArnHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws