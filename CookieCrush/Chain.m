//
//  Chain.m
//  CookieCrush
//
//  Created by Congshan Lv on 4/30/16.
//  Copyright © 2016 Congshan Lv. All rights reserved.
//

#import "Chain.h"

@implementation Chain {
    NSMutableArray *_cookies;
}

- (void)addCookie:(Cookie *)cookie {
    if (_cookies == nil) {
        _cookies = [NSMutableArray array];
    }
    [_cookies addObject:cookie];
}

- (NSArray *)cookies {
    return _cookies;
}

- (NSString *)description {
    return [NSString stringWithFormat:@"type:%ld cookies:%@", (long)self.chainType, self.cookies];
}

@end
