//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSArray, NSDictionary;

@interface _IMAPConnectionEnumerator : NSEnumerator
{
    NSDictionary *_connectionsByMailboxName;
    NSArray *_allMailboxNames;
    id _lastObjectKey;
    unsigned long long _allMailboxNamesCount;
    unsigned long long _positionInMailboxNames;
    NSEnumerator *_nullEnumerator;
}

- (void).cxx_destruct;
- (id)lastObjectKey;
- (id)nextObject;
- (id)init;
- (id)initWithConnectionDictionary:(id)arg1;

@end

