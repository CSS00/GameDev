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
#import "Chain.h"

static const NSInteger NumColumns = 9;
static const NSInteger NumRows = 9;

@interface Level : NSObject

@property (assign, nonatomic) NSUInteger targetScore;
@property (assign, nonatomic) NSUInteger maximumMoves;

- (void)resetComboMultiplier;

- (void)detectPossibleSwaps;

- (NSArray *)topUpCookies;

- (NSArray *)fillHoles;

- (NSSet *)removeMatches;

- (NSSet *)shuffle;

- (Cookie *)cookieAtColumn:(NSInteger)column row:(NSInteger)row;

- (instancetype)initWithFile:(NSString *)filename;

- (Tile *)tileAtColumn:(NSInteger)column row:(NSInteger)row;

- (void)performSwap:(Swap *)swap;

- (BOOL)isPossibleSwap:(Swap *)swap;

@end
