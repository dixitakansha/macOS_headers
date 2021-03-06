//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDList, WDListDefinition;

@interface CMOutlineState : NSObject
{
    NSMutableArray *_counters;
    WDListDefinition *_listDefinition;
    WDList *_currentList;
}

@property(readonly) WDListDefinition *listDefinition; // @synthesize listDefinition=_listDefinition;
@property(retain) WDList *currentList; // @synthesize currentList=_currentList;
- (void)increaseCounterAtLevel:(unsigned char)arg1;
- (id)levelDescriptionAtIndex:(unsigned char)arg1;
- (unsigned long long)counterAtLevel:(unsigned char)arg1;
- (void)setCounterTo:(unsigned long long)arg1 atLevel:(unsigned char)arg2;
- (void)reset;
- (unsigned long long)levelCount;
- (void)dealloc;
- (id)initWithListDefinition:(id)arg1;
- (id)init;

@end

