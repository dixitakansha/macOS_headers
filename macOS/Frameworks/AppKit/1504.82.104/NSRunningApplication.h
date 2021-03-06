//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSImage, NSLock, NSString, NSURL;

@interface NSRunningApplication : NSObject
{
    id _superReserved;
    void *_asn;
    void **_helpers;
    id _obsInfo;
    NSLock *_lock;
    NSString *_bundleID;
    NSString *_localizedName;
    NSURL *_bundleURL;
    NSURL *_executableURL;
    NSDate *_launchDate;
    NSImage *_icon;
    int _pid;
    unsigned int _lastSeed;
    unsigned int _activeSeed;
    unsigned int _staleSeed;
    unsigned long long _obsMask;
    struct {
        unsigned int fetchedDynamic:1;
        unsigned int deadToUs:1;
        unsigned int terminated:1;
        unsigned int finishedLaunching:1;
        unsigned int hidden:1;
        unsigned int active:1;
        unsigned int ownsMenuBar:1;
        unsigned int arch:3;
        unsigned int activationPolicy:3;
        unsigned int reserved1:19;
    } _aflags;
    id _appReserved;
}

+ (void)terminateAutomaticallyTerminableApplications;
+ (BOOL)_deactivateCurrentAppAndCheckIfFrontReservationIsAvailable;
+ (id)currentApplication;
+ (id)runningApplicationWithProcessIdentifier:(int)arg1;
+ (id)runningApplicationsWithBundleIdentifier:(id)arg1;
+ (id)_TALTerminatedApplications;
+ (id)_allApplications;
+ (id)_allRunningApplications;
+ (id)_transformASNArrayToAppArrayWithRelease:(struct __CFArray *)arg1;
+ (void)initialize;
+ (void)_dumpRunningApplicationObservationInfo;
- (BOOL)terminate;
- (BOOL)forceTerminate;
- (BOOL)_isLSStopped;
- (BOOL)_isProxiedByTalagent;
- (BOOL)activateWithOptions:(unsigned long long)arg1;
- (BOOL)unhide;
- (BOOL)hide;
- (BOOL)_performWithPSN:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void *)observationInfo;
- (void)setObservationInfo:(void *)arg1;
- (BOOL)_hasASN:(struct __LSASN *)arg1;
- (void)dealloc;
- (id)_initDeadWithLSDictionary:(struct __CFDictionary *)arg1 forASN:(struct __LSASN *)arg2;
- (id)initWithApplicationSerialNumber:(struct __LSASN *)arg1;
@property(readonly) long long executableArchitecture;
@property(readonly, copy) NSDate *launchDate;
@property(readonly) int processIdentifier;
@property(readonly) NSImage *icon;
@property(readonly, copy) NSURL *executableURL;
@property(readonly, copy) NSURL *bundleURL;
@property(readonly, copy) NSString *bundleIdentifier;
- (void)_fetchStaticInformationWithAtLeastKey:(struct __CFString *)arg1;
- (void)_applyInformationFromLSDictionary:(id)arg1 includeDynamicProperties:(BOOL)arg2;
- (id)_reasonThatQuittingWillBeNoisyOrLoseData;
- (BOOL)_quittingWillBeNoisyOrLoseData;
@property(readonly, copy) NSString *localizedName;
@property(readonly) long long activationPolicy;
@property(readonly) BOOL ownsMenuBar;
@property(readonly, getter=isActive) BOOL active;
@property(readonly, getter=isHidden) BOOL hidden;
@property(readonly, getter=isFinishedLaunching) BOOL finishedLaunching;
@property(readonly, getter=isTerminated) BOOL terminated;
- (void)_updateOrStaleProperty:(int)arg1;
- (void)_preserveStaleDynamicPropertiesForRemainderOfRunLoop;
- (BOOL)_preservingStaleProperties;
- (void)_fetchDynamicPropertiesIfNecessaryOrAppSeedIsOutOfDate;
- (void)_fetchDynamicPropertiesIfNecessary;
- (void)_fetchDynamicProperties;
- (BOOL)applyPendingPropertyChanges;
- (void)_updateActiveAndMenuBarOwnerProperties;
- (void)_applyPropertyChanges:(unsigned long long)arg1 fromDictionary:(struct __CFDictionary *)arg2;
- (id)_fetchValueForKey:(void *)arg1;
- (BOOL)_getProcessSerialNumber:(struct ProcessSerialNumber *)arg1;
- (struct __LSASN *)applicationSerialNumber;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (BOOL)_isAppPropertyUpdatedByLSNotifications:(int)arg1;
- (void)_checkForUnecessaryLSNotifications;
- (void)_updateObservationMask;
- (void)_changeObservingNotificationMask:(unsigned long long)arg1 to:(BOOL)arg2;
- (void)_observeChangeInKey:(int)arg1 withDataRef:(void *)arg2;
- (void)_postWillOrDidChangeNotificationsForKeyIndex:(int)arg1 isWill:(BOOL)arg2;
- (id)_URLForDeletingRestorableState;

@end

