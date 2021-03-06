/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef ALEXA_SMART_SCREEN_SDK_INTERFACES_TEST_MOCKEXCEPTIONENCOUNTEREDSENDER_H_
#define ALEXA_SMART_SCREEN_SDK_INTERFACES_TEST_MOCKEXCEPTIONENCOUNTEREDSENDER_H_

#include "AVSCommon/SDKInterfaces/ExceptionEncounteredSenderInterface.h"
#include <gmock/gmock.h>

namespace alexaSmartScreenSDK {
namespace smartScreenSDKInterfaces {
namespace test {

/**
 * Mock class that implements the ExceptionEncounteredSenderInterface.
 */
class MockExceptionEncounteredSender
        : public alexaClientSDK::avsCommon::sdkInterfaces::ExceptionEncounteredSenderInterface {
public:
    MOCK_METHOD3(
        sendExceptionEncountered,
        void(
            const std::string& unparsedDirective,
            alexaClientSDK::avsCommon::avs::ExceptionErrorType error,
            const std::string& errorDescription));
};

}  // namespace test
}  // namespace smartScreenSDKInterfaces
}  // namespace alexaSmartScreenSDK

#endif  // ALEXA_SMART_SCREEN_SDK_INTERFACES_TEST_MOCKEXCEPTIONENCOUNTEREDSENDER_H_
