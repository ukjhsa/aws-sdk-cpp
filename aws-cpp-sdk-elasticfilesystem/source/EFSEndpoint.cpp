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
#include <aws/elasticfilesystem/EFSEndpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::EFS;

namespace Aws
{
namespace EFS
{
namespace EFSEndpoint
{


  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack)
  {
    Aws::StringStream ss;
    ss << "elasticfilesystem" << ".";

    if(useDualStack)
    {
      ss << "dualstack.";
    }

    ss << regionName << ".amazonaws.com";
    return ss.str();
  }

} // namespace EFSEndpoint
} // namespace EFS
} // namespace Aws

