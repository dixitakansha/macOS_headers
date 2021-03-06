//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/HMAccessory.h>

@class HMResidentDevice, NSSet, NSString;

@interface HMAccessory (HFAdditions)
@property(readonly, copy, nonatomic) NSString *hf_defaultName;
@property(readonly, nonatomic) NSString *hf_editingName;
@property(readonly, nonatomic) BOOL hf_needsReprovisioningCheck;
@property(readonly, nonatomic) HMAccessory *hf_owningBridgeAccessory;
@property(readonly, nonatomic) NSSet *hf_servicesBehindBridge;
@property(readonly, nonatomic) NSSet *hf_programmableSwitchNamespaceServices;
- (id)hf_serviceOfType:(id)arg1;
@property(readonly, nonatomic) unsigned long long hf_numberOfProgrammableSwitches;
@property(readonly, nonatomic) long long hf_appPunchOutReason;
@property(readonly, copy, nonatomic) NSSet *hf_displayNamesForVisibleTiles;
@property(readonly, copy, nonatomic) NSSet *hf_componentServices;
@property(readonly, copy, nonatomic) NSSet *hf_visibleServices;
@property(readonly, copy, nonatomic) NSSet *hf_standardServices;
@property(readonly, nonatomic) HMResidentDevice *hf_linkedResidentDevice;
@property(readonly, nonatomic) BOOL hf_isRemoteControl;
@property(readonly, nonatomic) BOOL hf_isProgrammableSwitch;
@property(readonly, nonatomic) BOOL hf_isCamera;
@property(readonly, nonatomic) BOOL hf_isVisibleAsBridge;
@property(readonly, nonatomic) BOOL hf_isBridge;
@property(readonly, nonatomic) BOOL hf_requiresFirmwareUpdate;
@end

