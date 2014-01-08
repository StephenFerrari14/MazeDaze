//
//  Map.h
//  ProceduralLevelGeneration
//
//  Created by Christopher LaPollo on 10/6/13.
//  Copyright (c) 2013 Kim Pedersen. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface Map : SKNode

@property (nonatomic) CGSize gridSize;
@property (nonatomic, readonly) CGPoint spawnPoint;
@property (nonatomic, readonly) CGPoint exitPoint;
@property (nonatomic) NSUInteger maxFloorCount;

@property (nonatomic) NSUInteger turnResistance;
@property (nonatomic) NSUInteger floorMakerSpawnProbability;
@property (nonatomic) NSUInteger maxFloorMakerCount;

@property (nonatomic) NSUInteger roomProbability;
@property (nonatomic) CGSize roomMinSize;
@property (nonatomic) CGSize roomMaxSize;

+ (instancetype) mapWithGridSize:(CGSize)gridSize;
- (instancetype) initWithGridSize:(CGSize)gridSize;
- (void) generate;

@end
