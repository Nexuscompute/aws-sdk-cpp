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

#include <aws/sagemaker/model/DebugRuleEvaluationStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DebugRuleEvaluationStatus::DebugRuleEvaluationStatus() : 
    m_ruleConfigurationNameHasBeenSet(false),
    m_ruleEvaluationJobArnHasBeenSet(false),
    m_ruleEvaluationStatus(RuleEvaluationStatus::NOT_SET),
    m_ruleEvaluationStatusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

DebugRuleEvaluationStatus::DebugRuleEvaluationStatus(JsonView jsonValue) : 
    m_ruleConfigurationNameHasBeenSet(false),
    m_ruleEvaluationJobArnHasBeenSet(false),
    m_ruleEvaluationStatus(RuleEvaluationStatus::NOT_SET),
    m_ruleEvaluationStatusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DebugRuleEvaluationStatus& DebugRuleEvaluationStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleConfigurationName"))
  {
    m_ruleConfigurationName = jsonValue.GetString("RuleConfigurationName");

    m_ruleConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleEvaluationJobArn"))
  {
    m_ruleEvaluationJobArn = jsonValue.GetString("RuleEvaluationJobArn");

    m_ruleEvaluationJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleEvaluationStatus"))
  {
    m_ruleEvaluationStatus = RuleEvaluationStatusMapper::GetRuleEvaluationStatusForName(jsonValue.GetString("RuleEvaluationStatus"));

    m_ruleEvaluationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");

    m_statusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DebugRuleEvaluationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_ruleConfigurationNameHasBeenSet)
  {
   payload.WithString("RuleConfigurationName", m_ruleConfigurationName);

  }

  if(m_ruleEvaluationJobArnHasBeenSet)
  {
   payload.WithString("RuleEvaluationJobArn", m_ruleEvaluationJobArn);

  }

  if(m_ruleEvaluationStatusHasBeenSet)
  {
   payload.WithString("RuleEvaluationStatus", RuleEvaluationStatusMapper::GetNameForRuleEvaluationStatus(m_ruleEvaluationStatus));
  }

  if(m_statusDetailsHasBeenSet)
  {
   payload.WithString("StatusDetails", m_statusDetails);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws