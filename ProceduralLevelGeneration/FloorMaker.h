//
//  FloorMaker.h
//  ProceduralLevelGeneration
//
//  Created by Christopher LaPollo on 10/7/13.
//  Copyright (c) 2013 Kim Pedersen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FloorMaker : NSObject

@property (nonatomic) CGPoint currentPosition;
@property (nonatomic) NSUInteger direction;

- (instancetype) initWithCurrentPosition:(CGPoint)currentPosition andDirection:(NSUInteger)direction;

@end
