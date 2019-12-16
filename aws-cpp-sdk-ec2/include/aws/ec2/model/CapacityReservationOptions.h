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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/FleetCapacityReservationUsageStrategy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the strategy for using unused Capacity Reservations for fulfilling
   * On-Demand capacity.</p> <note> <p>This strategy can only be used if the EC2
   * Fleet is of type <code>instant</code>.</p> </note> <p>For more information about
   * Capacity Reservations, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-capacity-reservations.html">On-Demand
   * Capacity Reservations</a> in the <i>Amazon Elastic Compute Cloud User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationOptions">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CapacityReservationOptions
  {
  public:
    CapacityReservationOptions();
    CapacityReservationOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    CapacityReservationOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If the number of unused Capacity Reservations is less than the On-Demand target
     * capacity, the remaining On-Demand target capacity is launched as usual. When
     * unused Capacity Reservations are used to fulfil On-Demand capacity, the
     * On-Demand allocation strategy (<code>lowest-price</code> or
     * <code>prioritized</code>) is applied to them.</p> <p>If you do not specify a
     * value, the fleet fulfils the On-Demand capacity as usual.</p>
     */
    inline const FleetCapacityReservationUsageStrategy& GetUsageStrategy() const{ return m_usageStrategy; }

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If the number of unused Capacity Reservations is less than the On-Demand target
     * capacity, the remaining On-Demand target capacity is launched as usual. When
     * unused Capacity Reservations are used to fulfil On-Demand capacity, the
     * On-Demand allocation strategy (<code>lowest-price</code> or
     * <code>prioritized</code>) is applied to them.</p> <p>If you do not specify a
     * value, the fleet fulfils the On-Demand capacity as usual.</p>
     */
    inline bool UsageStrategyHasBeenSet() const { return m_usageStrategyHasBeenSet; }

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If the number of unused Capacity Reservations is less than the On-Demand target
     * capacity, the remaining On-Demand target capacity is launched as usual. When
     * unused Capacity Reservations are used to fulfil On-Demand capacity, the
     * On-Demand allocation strategy (<code>lowest-price</code> or
     * <code>prioritized</code>) is applied to them.</p> <p>If you do not specify a
     * value, the fleet fulfils the On-Demand capacity as usual.</p>
     */
    inline void SetUsageStrategy(const FleetCapacityReservationUsageStrategy& value) { m_usageStrategyHasBeenSet = true; m_usageStrategy = value; }

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If the number of unused Capacity Reservations is less than the On-Demand target
     * capacity, the remaining On-Demand target capacity is launched as usual. When
     * unused Capacity Reservations are used to fulfil On-Demand capacity, the
     * On-Demand allocation strategy (<code>lowest-price</code> or
     * <code>prioritized</code>) is applied to them.</p> <p>If you do not specify a
     * value, the fleet fulfils the On-Demand capacity as usual.</p>
     */
    inline void SetUsageStrategy(FleetCapacityReservationUsageStrategy&& value) { m_usageStrategyHasBeenSet = true; m_usageStrategy = std::move(value); }

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If the number of unused Capacity Reservations is less than the On-Demand target
     * capacity, the remaining On-Demand target capacity is launched as usual. When
     * unused Capacity Reservations are used to fulfil On-Demand capacity, the
     * On-Demand allocation strategy (<code>lowest-price</code> or
     * <code>prioritized</code>) is applied to them.</p> <p>If you do not specify a
     * value, the fleet fulfils the On-Demand capacity as usual.</p>
     */
    inline CapacityReservationOptions& WithUsageStrategy(const FleetCapacityReservationUsageStrategy& value) { SetUsageStrategy(value); return *this;}

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If the number of unused Capacity Reservations is less than the On-Demand target
     * capacity, the remaining On-Demand target capacity is launched as usual. When
     * unused Capacity Reservations are used to fulfil On-Demand capacity, the
     * On-Demand allocation strategy (<code>lowest-price</code> or
     * <code>prioritized</code>) is applied to them.</p> <p>If you do not specify a
     * value, the fleet fulfils the On-Demand capacity as usual.</p>
     */
    inline CapacityReservationOptions& WithUsageStrategy(FleetCapacityReservationUsageStrategy&& value) { SetUsageStrategy(std::move(value)); return *this;}

  private:

    FleetCapacityReservationUsageStrategy m_usageStrategy;
    bool m_usageStrategyHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws