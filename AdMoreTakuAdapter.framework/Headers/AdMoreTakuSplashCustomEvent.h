//
//  AdMoreTakuSplashCustomEvent.h
//  AdMoreAdSDKTakuAdapter
//
//  Created by Aaron on 2025/4/18.
//

#import <Foundation/Foundation.h>
#import <AnyThinkSplash/AnyThinkSplash.h>
#import <AdMoreSDK/AdMoreSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdMoreTakuSplashCustomEvent : ATSplashCustomEvent  <AdMoreSplashDelegate>
//超时时间
@property(nonatomic) NSDate *expireDate;
@property(nonatomic, weak) UIView *containerView;

@end

NS_ASSUME_NONNULL_END
