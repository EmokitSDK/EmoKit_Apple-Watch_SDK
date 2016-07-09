//
//  WKEmoKitManager.h
//  EmoKit_AppleWatch
//
//  Created by EmoKit on 16/6/15.
//  Copyright © 2016年 zhan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WKEmoKitManager : NSObject

/**
 设置申请获取的应用Key和Id
 @param appKey 申请的有效appKey
 @param appId  申请的有效appId
 */
+ (void)startAppKey:(NSString *)appKey AppId:(NSString *)appId;

@end
