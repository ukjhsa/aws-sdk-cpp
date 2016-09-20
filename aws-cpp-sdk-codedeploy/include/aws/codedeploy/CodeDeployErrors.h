﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/client/CoreErrors.h>
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>

namespace Aws
{
namespace CodeDeploy
{
enum class CodeDeployErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  NETWORK_CONNECTION = 99,
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  APPLICATION_ALREADY_EXISTS= static_cast<int>(Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  APPLICATION_DOES_NOT_EXIST,
  APPLICATION_LIMIT_EXCEEDED,
  APPLICATION_NAME_REQUIRED,
  BATCH_LIMIT_EXCEEDED,
  BUCKET_NAME_FILTER_REQUIRED,
  DEPLOYMENT_ALREADY_COMPLETED,
  DEPLOYMENT_CONFIG_ALREADY_EXISTS,
  DEPLOYMENT_CONFIG_DOES_NOT_EXIST,
  DEPLOYMENT_CONFIG_IN_USE,
  DEPLOYMENT_CONFIG_LIMIT_EXCEEDED,
  DEPLOYMENT_CONFIG_NAME_REQUIRED,
  DEPLOYMENT_DOES_NOT_EXIST,
  DEPLOYMENT_GROUP_ALREADY_EXISTS,
  DEPLOYMENT_GROUP_DOES_NOT_EXIST,
  DEPLOYMENT_GROUP_LIMIT_EXCEEDED,
  DEPLOYMENT_GROUP_NAME_REQUIRED,
  DEPLOYMENT_ID_REQUIRED,
  DEPLOYMENT_LIMIT_EXCEEDED,
  DEPLOYMENT_NOT_STARTED,
  DESCRIPTION_TOO_LONG,
  IAM_USER_ARN_ALREADY_REGISTERED,
  IAM_USER_ARN_REQUIRED,
  INSTANCE_DOES_NOT_EXIST,
  INSTANCE_ID_REQUIRED,
  INSTANCE_LIMIT_EXCEEDED,
  INSTANCE_NAME_ALREADY_REGISTERED,
  INSTANCE_NAME_REQUIRED,
  INSTANCE_NOT_REGISTERED,
  INVALID_APPLICATION_NAME,
  INVALID_AUTO_SCALING_GROUP,
  INVALID_BUCKET_NAME_FILTER,
  INVALID_DEPLOYED_STATE_FILTER,
  INVALID_DEPLOYMENT_CONFIG_NAME,
  INVALID_DEPLOYMENT_GROUP_NAME,
  INVALID_DEPLOYMENT_ID,
  INVALID_DEPLOYMENT_STATUS,
  INVALID_E_C2_TAG,
  INVALID_IAM_USER_ARN,
  INVALID_INSTANCE_NAME,
  INVALID_INSTANCE_STATUS,
  INVALID_KEY_PREFIX_FILTER,
  INVALID_MINIMUM_HEALTHY_HOST_VALUE,
  INVALID_NEXT_TOKEN,
  INVALID_OPERATION,
  INVALID_REGISTRATION_STATUS,
  INVALID_REVISION,
  INVALID_ROLE,
  INVALID_SORT_BY,
  INVALID_SORT_ORDER,
  INVALID_TAG,
  INVALID_TAG_FILTER,
  INVALID_TIME_RANGE,
  INVALID_TRIGGER_CONFIG,
  LIFECYCLE_HOOK_LIMIT_EXCEEDED,
  REVISION_DOES_NOT_EXIST,
  REVISION_REQUIRED,
  ROLE_REQUIRED,
  TAG_LIMIT_EXCEEDED,
  TAG_REQUIRED,
  TRIGGER_TARGETS_LIMIT_EXCEEDED
};
namespace CodeDeployErrorMapper
{
  AWS_CODEDEPLOY_API Client::AWSError<Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace CodeDeploy
} // namespace Aws