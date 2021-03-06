//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SignpostSupport/SignpostInterval.h>

@class NSArray;

@interface SignpostAnimationInterval : SignpostInterval
{
    NSArray *_compositeIntervals;
}

+ (id)serializationTypeNumber;
@property(retain, nonatomic) NSArray *compositeIntervals; // @synthesize compositeIntervals=_compositeIntervals;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long frameCount;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2 compositeIntervalTimeline:(id)arg3;
@property(readonly, nonatomic) float frameRate;
- (id)debugDescription;
- (id)descriptionStringForColumn:(unsigned long long)arg1 timeInSeconds:(BOOL)arg2;
- (id)_intervalTypeString;
- (id)initWithDictionary:(id)arg1;
- (id)serializeableDictionary;

@end

