//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Fernando Nava on 5/18/13.
//  Copyright (c) 2013 Fernando Nava. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject

-(id)initWithCardCount:(NSUInteger)cardCount
             usingDeck:(Deck *)deck;

-(void)flipCardAtIndex:(NSUInteger)index;

-(Card *)cardAtIndex:(NSUInteger)index;


@property (readonly, nonatomic) NSString *descriptionOfLastFlip;
@property (nonatomic, readonly) int score;

@property (nonatomic) int numberOfMatchingCards;

@end
