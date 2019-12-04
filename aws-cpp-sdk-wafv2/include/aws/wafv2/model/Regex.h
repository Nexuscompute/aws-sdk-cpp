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
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <note> <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p> </note> <p>A single regular expression. This is
   * used in a <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Regex">AWS API
   * Reference</a></p>
   */
  class AWS_WAFV2_API Regex
  {
  public:
    Regex();
    Regex(Aws::Utils::Json::JsonView jsonValue);
    Regex& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string representing the regular expression.</p>
     */
    inline const Aws::String& GetRegexString() const{ return m_regexString; }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline bool RegexStringHasBeenSet() const { return m_regexStringHasBeenSet; }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline void SetRegexString(const Aws::String& value) { m_regexStringHasBeenSet = true; m_regexString = value; }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline void SetRegexString(Aws::String&& value) { m_regexStringHasBeenSet = true; m_regexString = std::move(value); }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline void SetRegexString(const char* value) { m_regexStringHasBeenSet = true; m_regexString.assign(value); }

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline Regex& WithRegexString(const Aws::String& value) { SetRegexString(value); return *this;}

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline Regex& WithRegexString(Aws::String&& value) { SetRegexString(std::move(value)); return *this;}

    /**
     * <p>The string representing the regular expression.</p>
     */
    inline Regex& WithRegexString(const char* value) { SetRegexString(value); return *this;}

  private:

    Aws::String m_regexString;
    bool m_regexStringHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws