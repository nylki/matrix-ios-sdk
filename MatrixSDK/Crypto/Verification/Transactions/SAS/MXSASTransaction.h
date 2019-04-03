/*
 Copyright 2019 New Vector Ltd

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import "MXDeviceVerificationTransaction.h"

#import "MXEmojiRepresentation.h"


NS_ASSUME_NONNULL_BEGIN

#pragma mark - Constants

FOUNDATION_EXPORT NSString * _Nonnull const kMXKeyVerificationMethodSAS;

FOUNDATION_EXPORT NSString * _Nonnull const kMXKeyVerificationSASModeDecimal;
FOUNDATION_EXPORT NSString * _Nonnull const kMXKeyVerificationSASModeEmoji;


/**
 An handler on an interactive device verification based on Short Authentication Code.
 */
@interface MXSASTransaction : MXDeviceVerificationTransaction

/**
 The Short Authentication Code bytes data.
 */
@property (nonatomic, nullable) NSData *sasBytes;

/**
 `self.sasBytes` represented by a three 4-digit numbers string.
 */
@property (nonatomic, readonly, nullable) NSString *sasDecimal;

/**
 `self.sasBytes` represented by a 7 emojis
 */
@property (nonatomic, readonly, nullable) NSArray<MXEmojiRepresentation*> *sasEmoji;


@end

NS_ASSUME_NONNULL_END
