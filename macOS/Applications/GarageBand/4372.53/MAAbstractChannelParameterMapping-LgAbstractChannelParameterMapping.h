//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MACore/MAAbstractChannelParameterMapping.h>

@interface MAAbstractChannelParameterMapping (LgAbstractChannelParameterMapping)
- (unsigned long long)hash;
@property long long logicOnlyInputValue;
- (long long)maxLongValue;
- (long long)longValueForString:(id)arg1;
- (id)editingStringForLongValue:(long long)arg1;
- (id)stringForLongValue:(long long)arg1;
- (void)setRangeHigh:(long long)arg1;
- (void)setRangeLow:(long long)arg1;
- (id)displayName;
- (id)channelName;
- (id)name;
@property struct CSong *logicOnlySong;
- (BOOL)isEqual:(id)arg1;
- (long long)type;
- (long long)rangeHigh;
- (long long)rangeLow;
- (long long)longValue;
- (long long)destination;
- (double)savedValue;
- (void)setSavedValue:(double)arg1;
- (id)initWithParameterIndex:(long long)arg1;
@end

