//
//  AdMoreTakuBiddingRequestManager.h
//  AdMoreAdSDKTakuAdapter
//
//  Created by Aaron on 2025/4/18.
//

#import "AdMoreTakuBiddingRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdMoreTakuBiddingRequestManager : AdMoreTakuBiddingRequest

+ (instancetype)sharedInstance;

- (void)startWithRequestItem:(AdMoreTakuBiddingRequest *)request;

- (AdMoreTakuBiddingRequest *)getRequestItemWithUnitID:(NSString *)unitID;

- (void)removeRequestItmeWithUnitID:(NSString *)unitID;

@end

NS_ASSUME_NONNULL_END
