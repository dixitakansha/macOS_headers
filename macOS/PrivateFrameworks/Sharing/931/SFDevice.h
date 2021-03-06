//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID, SFBLEDevice, SFProximityEstimator;

@interface SFDevice : NSObject <NSSecureCoding>
{
    BOOL _autoUnlockEnabled;
    BOOL _autoUnlockWatch;
    unsigned char _deviceActionType;
    unsigned char _deviceClassCode;
    unsigned char _deviceModelCode;
    BOOL _hasProblem;
    BOOL _needsKeyboard;
    BOOL _needsSetup;
    BOOL _wakeDevice;
    BOOL _watchLocked;
    unsigned char _osVersion;
    BOOL _paired;
    unsigned int _systemPairState;
    NSArray *_batteryInfo;
    SFBLEDevice *_bleDevice;
    NSString *_contactIdentifier;
    long long _deviceType;
    long long _distance;
    NSUUID *_identifier;
    NSString *_idsIdentifier;
    NSString *_model;
    NSString *_name;
    NSString *_requestSSID;
    SFProximityEstimator *_setupProximityEstimator;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SFProximityEstimator *setupProximityEstimator; // @synthesize setupProximityEstimator=_setupProximityEstimator;
@property(nonatomic) BOOL paired; // @synthesize paired=_paired;
@property(nonatomic) unsigned char osVersion; // @synthesize osVersion=_osVersion;
@property(nonatomic) BOOL watchLocked; // @synthesize watchLocked=_watchLocked;
@property(nonatomic) BOOL wakeDevice; // @synthesize wakeDevice=_wakeDevice;
@property(nonatomic) unsigned int systemPairState; // @synthesize systemPairState=_systemPairState;
@property(copy, nonatomic) NSString *requestSSID; // @synthesize requestSSID=_requestSSID;
@property(nonatomic) BOOL needsSetup; // @synthesize needsSetup=_needsSetup;
@property(readonly, nonatomic) BOOL needsKeyboard; // @synthesize needsKeyboard=_needsKeyboard;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL hasProblem; // @synthesize hasProblem=_hasProblem;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) unsigned char deviceModelCode; // @synthesize deviceModelCode=_deviceModelCode;
@property(nonatomic) unsigned char deviceClassCode; // @synthesize deviceClassCode=_deviceClassCode;
@property(readonly, nonatomic) unsigned char deviceActionType; // @synthesize deviceActionType=_deviceActionType;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) SFBLEDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(copy, nonatomic) NSArray *batteryInfo; // @synthesize batteryInfo=_batteryInfo;
@property(nonatomic) BOOL autoUnlockWatch; // @synthesize autoUnlockWatch=_autoUnlockWatch;
@property(nonatomic) BOOL autoUnlockEnabled; // @synthesize autoUnlockEnabled=_autoUnlockEnabled;
- (void).cxx_destruct;
- (void)updateWithPairedPeer:(id)arg1;
- (void)updateWithBLEDevice:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

