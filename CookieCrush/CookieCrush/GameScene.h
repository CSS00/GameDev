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

@class Level;

@interface GameScene : SKScene

@property (strong, nonatomic) Level *level;

- (void)addSpritesForCookies:(NSSet *)cookies;

@end
