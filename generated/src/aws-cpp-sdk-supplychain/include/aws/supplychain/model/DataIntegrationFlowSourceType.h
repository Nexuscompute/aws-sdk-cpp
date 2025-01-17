﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{
  enum class DataIntegrationFlowSourceType
  {
    NOT_SET,
    S3,
    DATASET
  };

namespace DataIntegrationFlowSourceTypeMapper
{
AWS_SUPPLYCHAIN_API DataIntegrationFlowSourceType GetDataIntegrationFlowSourceTypeForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataIntegrationFlowSourceType(DataIntegrationFlowSourceType value);
} // namespace DataIntegrationFlowSourceTypeMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
