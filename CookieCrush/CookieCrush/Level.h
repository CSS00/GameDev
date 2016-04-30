//
//  Level.h
//  CookieCrush
//
//  Created by Congshan Lv on 4/29/16.
//  Copyright © 2016 Congshan Lv. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Cookie.h"
#import "Tile.h"

static const NSInteger NumColumns = 9;
static const NSInteger NumRows = 9;

@interface Level : NSObject

- (NSSet *)shuffle;

- (Cookie *)cookieAtColumn:(NSInteger)column row:(NSInteger)row;

- (instancetype)initWithFile:(NSString *)filename;

- (Tile *)tileAtColumn:(NSInteger)column row:(NSInteger)row;

- (void)performSwap:(Swap *)swap;

@end
