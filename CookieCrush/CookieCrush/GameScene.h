//
//  GameScene.h
//  CookieCrush
//

//  Copyright (c) 2016 Congshan Lv. All rights reserved.
//

//#import <SpriteKit/SpriteKit.h>
//
//@interface GameScene : SKScene
//
//@end
#import <SpriteKit/SpriteKit.h>
@import SpriteKit;
@class Swap;
@class Level;

@interface GameScene : SKScene

@property (strong, nonatomic) Level *level;
@property (copy, nonatomic) void (^swipeHandler)(Swap *swap);

- (void)animateNewCookies:(NSArray *)columns completion:(dispatch_block_t)completion;

- (void)animateFallingCookies:(NSArray *)columns completion:(dispatch_block_t)completion;

- (void)animateMatchedCookies:(NSSet *)chains completion:(dispatch_block_t)completion;

- (void)addSpritesForCookies:(NSSet *)cookies;

- (void)addTiles;

- (void)animateSwap:(Swap *)swap completion:(dispatch_block_t)completion;

- (void)animateInvalidSwap:(Swap *)swap completion:(dispatch_block_t)completion;

@end
