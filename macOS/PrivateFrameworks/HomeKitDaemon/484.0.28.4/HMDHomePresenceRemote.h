//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomePresenceCheck-Protocol.h>

@class NSDictionary;

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck>
{
    NSDictionary *_userPresenceMap;
}

+ (id)presenceRemoteWithDictionary:(id)arg1 presenceIdentifierDict:(id)arg2;
@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
- (void).cxx_destruct;
- (BOOL)isAnyUserAtHome;
- (BOOL)isNoUserAtHome;
- (BOOL)areUsersNotAtHome:(id)arg1;
- (BOOL)areUsersAtHome:(id)arg1;
- (BOOL)isUserNotAtHome:(id)arg1;
- (BOOL)isUserAtHome:(id)arg1;
- (id)regionForUser:(id)arg1;
- (id)description;
- (void)_initializeWithPresenceMap:(id)arg1;
- (void)_initializeWithPresenceIdentifierMap:(id)arg1;
- (id)initWithDictionary:(id)arg1 presenceIdentifierDict:(id)arg2;

@end

