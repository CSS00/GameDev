//
//  Cookie.h
//  CookieCrush
//
//  Created by Congshan Lv on 4/29/16.
//  Copyright © 2016 Congshan Lv. All rights reserved.
//

@import SpriteKit;

static const NSUInteger NumCookieTypes = 6;

@interface Cookie : NSObject

@property (assign, nonatomic) NSInteger column;
@property (assign, nonatomic) NSInteger row;
@property (assign, nonatomic) NSUInteger cookieType;
@property (strong, nonatomic) SKSpriteNode *sprite;

- (NSString *)spriteName;
- (NSString *)highlightedSpriteName;

@end
