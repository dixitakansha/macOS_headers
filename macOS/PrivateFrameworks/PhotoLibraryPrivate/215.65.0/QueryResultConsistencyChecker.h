//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QueryResultConsistencyChecker : NSObject
{
    BOOL _isSmartAlbum;
    unsigned long long _userQueryChecksum;
}

- (void)setUserQuery:(id)arg1;
@property(readonly, nonatomic) BOOL isEstablished;
- (void)resetAll;
- (BOOL)isConsistentWithUserQuery:(id)arg1;
- (id)description;
- (id)initWithAlbum:(id)arg1;

@end

