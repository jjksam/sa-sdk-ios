//
// SAConfigOptions+Encrypt+Private.h
// SensorsAnalyticsSDK
//
// Created by 陈玉国 on 2023/4/6.
// Copyright © 2015-2023 Sensors Data Co., Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//


#import "SAConfigOptions.h"

NS_ASSUME_NONNULL_BEGIN

@interface SAConfigOptions (SAEncryptPrivate)

/// enable encrypt bulk events when flush
@property (nonatomic, assign) BOOL enableFlushEncrypt;

@end

NS_ASSUME_NONNULL_END
