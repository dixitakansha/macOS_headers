//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDAccountManager-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class ACAccountStore, HMDAccount, HMDAppleAccountContext, HMDBackingStore, HMDDevice, HMFExponentialBackoffTimer, HMFTimer, IDSService, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDAppleAccountManager : HMFObject <HMDAccountManager, HMFLogging, HMFTimerDelegate, IDSServiceDelegate>
{
    BOOL _monitoring;
    BOOL _resolved;
    HMDAccount *_account;
    HMDAppleAccountContext *_accountContext;
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFExponentialBackoffTimer *_accountChangeBackoffTimer;
    HMFTimer *_devicesChangeBackoffTimer;
    IDSService *_service;
    HMDBackingStore *_backingStore;
}

+ (id)logCategory;
+ (id)cloudOptions;
+ (id)sharedManager;
@property(retain, nonatomic) HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic, getter=isResolved) BOOL resolved; // @synthesize resolved=_resolved;
@property(nonatomic, getter=isMonitoring) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property(readonly, nonatomic) HMFTimer *devicesChangeBackoffTimer; // @synthesize devicesChangeBackoffTimer=_devicesChangeBackoffTimer;
@property(readonly, nonatomic) HMFExponentialBackoffTimer *accountChangeBackoffTimer; // @synthesize accountChangeBackoffTimer=_accountChangeBackoffTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)timerDidFire:(id)arg1;
- (void)processAccountModelRemove:(id)arg1 message:(id)arg2;
- (void)processAccountModel:(id)arg1 message:(id)arg2;
- (BOOL)isModelCurrentAccount:(id)arg1;
- (BOOL)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;
- (BOOL)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;
- (BOOL)shouldSyncDevice:(id)arg1;
- (BOOL)shouldSyncAccount:(id)arg1;
- (BOOL)shouldCacheAccount:(id)arg1;
@property(readonly) HMDDevice *device;
- (void)__deviceRemovedFromCurrentAccount:(id)arg1;
- (void)__deviceAddedToCurrentAccount:(id)arg1;
@property(retain) HMDAccount *account; // @synthesize account=_account;
- (void)updateAccountContext;
- (void)setAccountContext:(id)arg1;
@property(readonly) HMDAppleAccountContext *accountContext; // @synthesize accountContext=_accountContext;
- (void)stop;
- (void)start;
- (id)initWithIDSService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

