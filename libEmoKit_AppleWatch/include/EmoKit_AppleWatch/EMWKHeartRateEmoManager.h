//
//  EMWKHeartRateEmoManager.h
//  EmoKit_AppleWatch
//
//  Created by EmoKit on 16/6/14.
//  Copyright © 2016年 zhan. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EMWKQueryUpdateState) {
    EMWKQueryUpdateStateNOAutho =  1,        // 用户没有授权，需提示用户在设置->隐私里打开授权
    EMWKQueryUpdateStateQuerying,            // 心率检测中
    EMWKQueryUpdateStateAnalying,            // 情绪分析中
    EMWKQueryUpdateStateFinished             // 检测结束
};


@protocol EMWKHeartRateEmoManagerDelegate <NSObject>

@required
/**
 心率检测返回的结果
 */
- (void)responseHeartRateEmoResult:(NSDictionary *)dic;

@optional
/**
 检测的心率值，每检测更新一个心率值，调用一次
 */
- (void)updateHeartRateValue:(NSInteger)value;

/**
 心率检测的状态更新
 */
- (void)queryUpdateState:(EMWKQueryUpdateState)state;

/**
 心率检测中的倒计时（注：由于在后台时无法继续检测心率，此倒计时作为检测的大概剩余时间参考值
 比较合适，检测结束以EMWKQueryUpdateStateFinished为主）
 */
- (void)queryingCountdownSecond:(NSInteger)sencond;

@end



@interface EMWKHeartRateEmoManager : NSObject

/**
 开始心率检测并获取对应的情绪结果
 @param:rc_type, nil时默认为7种情绪
 rc_type=1，返回24种情绪
 rc_type=2，返回7种情绪
 rc_type=3，返回5种情绪
 */
+ (void)beginGetEmoByHeartRateDetection:(id<EMWKHeartRateEmoManagerDelegate>)delegate rc_type:(NSString *)rc_type;

/**
 停止检测心率（注：在应用停止检测心率或者检测心率界面消失时
 应调用此方法停止心率检测，否则检测心率的活动可能一直还在进行中）
 */
+ (void)stopDetecting;

@end
