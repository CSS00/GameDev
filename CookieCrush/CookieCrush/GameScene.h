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

- (void)addSpritesForCookies:(NSSet *)cookies;

- (void)addTiles;

- (void)animateSwap:(Swap *)swap completion:(dispatch_block_t)completion;

@end
