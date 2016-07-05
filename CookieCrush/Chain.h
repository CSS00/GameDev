//
//  Chain.h
//  CookieCrush
//
//  Created by Congshan Lv on 4/30/16.
//  Copyright © 2016 Congshan Lv. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Cookie;

typedef NS_ENUM(NSUInteger, ChainType) {
    ChainTypeHorizontal,
    ChainTypeVertical,
};

@interface Chain : NSObject

@property (strong, nonatomic, readonly) NSArray *cookies;

@property (assign, nonatomic) ChainType chainType;

- (void)addCookie:(Cookie *)cookie;

@end