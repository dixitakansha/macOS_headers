//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GHUpdateItem : NSObject
{
    NSString *_description;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *description; // @synthesize description=_description;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 description:(id)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

