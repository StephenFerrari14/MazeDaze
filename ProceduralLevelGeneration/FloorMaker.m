//
//  FloorMaker.m
//  ProceduralLevelGeneration
//
//  Created by Christopher LaPollo on 10/7/13.
//  Copyright (c) 2013 Kim Pedersen. All rights reserved.
//

#import "FloorMaker.h"

@implementation FloorMaker

- (instancetype) initWithCurrentPosition:(CGPoint)currentPosition andDirection:(NSUInteger)direction
{
  if (( self = [super init] ))
  {
    self.currentPosition = currentPosition;
    self.direction = direction;
  }
  return self;
}

@end
