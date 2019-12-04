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
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SuppressionListReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/SuppressedDestinationAttributes.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object containing information about the suppressed email
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressedDestination">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API SuppressedDestination
  {
  public:
    SuppressedDestination();
    SuppressedDestination(Aws::Utils::Json::JsonView jsonValue);
    SuppressedDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The suppressed email destination.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The suppressed email destination.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The suppressed email destination.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The suppressed email destination.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The suppressed email destination.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The suppressed email destination.</p>
     */
    inline SuppressedDestination& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The suppressed email destination.</p>
     */
    inline SuppressedDestination& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The suppressed email destination.</p>
     */
    inline SuppressedDestination& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The reason for which the email destination is suppressed.</p>
     */
    inline const SuppressionListReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for which the email destination is suppressed.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for which the email destination is suppressed.</p>
     */
    inline void SetReason(const SuppressionListReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for which the email destination is suppressed.</p>
     */
    inline void SetReason(SuppressionListReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for which the email destination is suppressed.</p>
     */
    inline SuppressedDestination& WithReason(const SuppressionListReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for which the email destination is suppressed.</p>
     */
    inline SuppressedDestination& WithReason(SuppressionListReason&& value) { SetReason(std::move(value)); return *this;}


    /**
     * <p>The last time the suppressed destination was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last time the suppressed destination was updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The last time the suppressed destination was updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time the suppressed destination was updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The last time the suppressed destination was updated.</p>
     */
    inline SuppressedDestination& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time the suppressed destination was updated.</p>
     */
    inline SuppressedDestination& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p> <code>Optional</code> value with information about the sources of the
     * suppression.</p>
     */
    inline const SuppressedDestinationAttributes& GetAttributes() const{ return m_attributes; }

    /**
     * <p> <code>Optional</code> value with information about the sources of the
     * suppression.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p> <code>Optional</code> value with information about the sources of the
     * suppression.</p>
     */
    inline void SetAttributes(const SuppressedDestinationAttributes& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p> <code>Optional</code> value with information about the sources of the
     * suppression.</p>
     */
    inline void SetAttributes(SuppressedDestinationAttributes&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p> <code>Optional</code> value with information about the sources of the
     * suppression.</p>
     */
    inline SuppressedDestination& WithAttributes(const SuppressedDestinationAttributes& value) { SetAttributes(value); return *this;}

    /**
     * <p> <code>Optional</code> value with information about the sources of the
     * suppression.</p>
     */
    inline SuppressedDestination& WithAttributes(SuppressedDestinationAttributes&& value) { SetAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet;

    SuppressionListReason m_reason;
    bool m_reasonHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;

    SuppressedDestinationAttributes m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws