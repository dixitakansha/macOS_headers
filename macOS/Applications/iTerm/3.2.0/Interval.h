//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface Interval : NSObject <NSCopying>
{
    long long _location;
    long long _length;
}

+ (id)maxInterval;
+ (id)intervalWithLocation:(long long)arg1 length:(long long)arg2;
+ (id)intervalWithDictionary:(id)arg1;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) long long location; // @synthesize location=_location;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryValue;
- (BOOL)isEqualToInterval:(id)arg1;
- (void)boundsCheck;
- (id)description;
- (BOOL)intersects:(id)arg1;
@property(readonly, nonatomic) long long limit;

@end

