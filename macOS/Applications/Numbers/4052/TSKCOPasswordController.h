//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKMailboxSessionControllerDelegate-Protocol.h"

@class NSString, TSKCOPasswordServiceClient, TSKCOPasswordState, TSKSecret, TSUWeakReference;
@protocol OS_dispatch_queue, TSKMailboxSessionController;

@interface TSKCOPasswordController : NSObject <TSKMailboxSessionControllerDelegate>
{
    TSUWeakReference *_mailboxSessionControllerReference;
    TSUWeakReference *_passwordProviderReference;
    TSUWeakReference *_documentRootReference;
    NSObject<OS_dispatch_queue> *_passwordQueue;
    BOOL _hasPendingActions;
    BOOL _mailboxSuspended;
    TSKCOPasswordState *_state;
    TSKCOPasswordServiceClient *_passwordServiceClient;
    TSKSecret *_secretInUse;
}

+ (id)stringForChangePasswordStatusCode:(unsigned long long)arg1;
@property(retain, nonatomic) TSKSecret *secretInUse; // @synthesize secretInUse=_secretInUse;
@property BOOL mailboxSuspended; // @synthesize mailboxSuspended=_mailboxSuspended;
@property(retain, nonatomic) TSKCOPasswordServiceClient *passwordServiceClient; // @synthesize passwordServiceClient=_passwordServiceClient;
@property(retain, nonatomic) TSKCOPasswordState *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *passwordQueue; // @synthesize passwordQueue=_passwordQueue;
- (void)getSecretWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onSharingStatePermissionUpdateEnd;
- (void)onSharingStateCollaborationStopped;
- (void)onSharingStatePermissionUpdateBeginWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onPasswordNotRequired;
- (void)onPasswordIncorrect:(id)arg1;
- (void)onPasswordAccepted:(id)arg1;
- (id)changePassword:(id)arg1 currentPassword:(id)arg2 newPassword:(id)arg3 hint:(id)arg4;
- (id)dump;
- (void)onUnrecoverableError:(id)arg1;
- (void)onResponseError:(id)arg1;
- (void)reInit;
- (void)processResponsePayload:(id)arg1;
- (void)preProcessResponsePayload:(id)arg1;
- (void)onResponseReceived;
- (void)onRequestSent;
- (void)populateDataRequest:(id)arg1;
- (void)populateActionRequest:(id)arg1;
- (void)onDisconnectedWithCode:(unsigned long long)arg1 message:(id)arg2;
- (void)setHasPendingActions:(BOOL)arg1;
- (BOOL)hasPendingActions;
- (void)resume;
- (void)suspend;
@property(readonly, nonatomic) BOOL lastKnownDisconnectedState;
- (void)onInitRequest:(id)arg1;
@property(readonly, nonatomic) unsigned long long protectionState;
- (id)documentRoot;
- (void)setDocumentRoot:(id)arg1;
- (id)passwordProvider;
- (void)setPasswordProvider:(id)arg1;
@property(nonatomic) id <TSKMailboxSessionController> mailboxSessionController;
- (void)dealloc;
- (id)initWithPassphrase:(id)arg1;
- (id)sendSetPassword:(id)arg1 newPassword:(id)arg2 hint:(id)arg3 waitForUpload:(BOOL)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setPasswordReadyForTrial:(BOOL)arg1 abortCurrentTrial:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

