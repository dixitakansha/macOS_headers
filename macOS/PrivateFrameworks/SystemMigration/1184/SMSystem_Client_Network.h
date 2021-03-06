//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SMSystem_Client.h>

@class NSImage, NSNumber, NSOrderedSet, NSString;

@interface SMSystem_Client_Network : SMSystem_Client
{
    BOOL connected;
    BOOL availableInSystemLists;
    BOOL _sourceKnowsPasscode;
    BOOL _isAttemptingWirelessSwitch;
    NSString *model;
    NSImage *icon;
    NSNumber *passcode;
    NSString *handoffHint;
    unsigned long long _networkState;
    NSOrderedSet *_fasterInterfaceRecommendations;
    unsigned long long _effectiveConnectionMethod;
    NSOrderedSet *_connectionFamilies;
}

+ (id)longTermIdentifierWithNameMatch:(id)arg1;
+ (id)keyPathsForValuesAffectingFasterInterfaceRecommendation;
+ (id)guiMonitorKeys;
+ (void)initialize;
@property BOOL isAttemptingWirelessSwitch; // @synthesize isAttemptingWirelessSwitch=_isAttemptingWirelessSwitch;
@property(readonly) NSOrderedSet *connectionFamilies; // @synthesize connectionFamilies=_connectionFamilies;
@property(readonly) unsigned long long effectiveConnectionMethod; // @synthesize effectiveConnectionMethod=_effectiveConnectionMethod;
@property(retain) NSOrderedSet *fasterInterfaceRecommendations; // @synthesize fasterInterfaceRecommendations=_fasterInterfaceRecommendations;
@property(readonly) BOOL sourceKnowsPasscode; // @synthesize sourceKnowsPasscode=_sourceKnowsPasscode;
@property unsigned long long networkState; // @synthesize networkState=_networkState;
@property BOOL availableInSystemLists; // @synthesize availableInSystemLists;
@property(retain) NSString *handoffHint; // @synthesize handoffHint;
@property BOOL connected; // @synthesize connected;
@property(retain) NSNumber *passcode; // @synthesize passcode;
@property(retain) NSImage *icon; // @synthesize icon;
@property(readonly) NSString *model; // @synthesize model;
- (void).cxx_destruct;
- (BOOL)matchesLongTermIdentifier:(id)arg1;
@property(readonly) NSString *fasterInterfaceRecommendation;
- (BOOL)isMounted;
- (id)volumeIconAccesibilityLabel;
- (id)displayName;
- (id)displayState;
- (long long)defaultUIRank;

@end

