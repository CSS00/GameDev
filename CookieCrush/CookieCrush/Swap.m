//
//  Swap.m
//  CookieCrush
//
//  Created by Congshan Lv on 4/29/16.
//  Copyright © 2016 Congshan Lv. All rights reserved.
//

#import "Swap.h"
#import "Cookie.h"

@implementation Swap

- (NSString *)description {
    return [NSString stringWithFormat:@"%@ swap %@ with %@", [super description], self.cookieA, self.cookieB];
}

- (BOOL)isEqual:(id)object {
    // You can only compare this object against other RWTSwap objects.
    if (![object isKindOfClass:[Swap class]]) return NO;
    
    // Two swaps are equal if they contain the same cookie, but it doesn't
    // matter whether they're called A in one and B in the other.
    Swap *other = (Swap *)object;
    return (other.cookieA == self.cookieA && other.cookieB == self.cookieB) ||
    (other.cookieB == self.cookieA && other.cookieA == self.cookieB);
}

- (NSUInteger)hash {
    return [self.cookieA hash] ^ [self.cookieB hash];
}

@end
