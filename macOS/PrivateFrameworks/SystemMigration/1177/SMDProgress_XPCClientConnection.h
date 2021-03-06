//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SMDXPCClientConnection.h>

#import <SystemMigration/MigrationProgressEventsListener-Protocol.h>
#import <SystemMigration/SMDProgressProtocol-Protocol.h>

@interface SMDProgress_XPCClientConnection : SMDXPCClientConnection <SMDProgressProtocol, MigrationProgressEventsListener>
{
}

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)attemptingWirelessNetworkSwitch:(BOOL)arg1 manual:(BOOL)arg2;
- (void)associatedWithWirelessNetwork:(BOOL)arg1;
- (void)wirelessAccessPointDestroyed;
- (void)wirelessAccessPointCreated:(id)arg1 password:(id)arg2;
- (void)sourceMacInterfaceTypeChanged:(id)arg1 type:(unsigned long long)arg2 appropriateIcon:(unsigned long long)arg3;
- (void)engineDidBecomeCancellable;
- (void)engineWillBecomeNonCancellable;
- (void)engineStatus:(id)arg1 arguments:(id)arg2;
- (void)migrationRequestCompletedState:(unsigned long long)arg1 advancingTo:(unsigned long long)arg2 withErrorsAndWarnings:(id)arg3;
- (void)engineMinutesRemaining:(id)arg1 transferRate:(id)arg2;
- (void)enginePercentDone:(id)arg1;
- (void)engineProcessingText:(id)arg1;
- (void)engineStartedWithRequestUUID:(id)arg1 migrationType:(unsigned long long)arg2;
- (void)networkInterfacesAvailable:(CDUnknownBlockType)arg1;
- (void)userDeclinedSoftAP;
- (void)cancelCurrentRequest;
- (void)acknowledgeCompletedRequest;
- (void)currentIncompatibleApps:(CDUnknownBlockType)arg1;
- (void)currentMigrationState:(CDUnknownBlockType)arg1;
- (void)sourceSystemForCurrentMigration:(CDUnknownBlockType)arg1;
- (void)start;
- (void)dealloc;
- (id)init;

@end

