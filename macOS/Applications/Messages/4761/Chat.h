//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InstantMessage/IMChat.h>

@class AVChatController, NSDictionary;

@interface Chat : IMChat
{
    AVChatController *_pendingVCDecline;
    NSDictionary *_invitationActions;
}

@property(retain, nonatomic) NSDictionary *invitationActions; // @synthesize invitationActions=_invitationActions;
- (void)setPendingVCDecline:(id)arg1;
- (void)join;
- (void)declineInvitation;
- (void)acceptInvitation;
- (BOOL)shouldAutoJoin;
- (id)lastInterestingMessage;
- (BOOL)isSavedChat;
- (int)aggregateChatStyle;
- (void)_doPendingVCDecline;
- (void)sendMessage:(id)arg1;
- (id)instantMessageForInputLineString:(id)arg1 baseWritingDirection:(long long)arg2 flags:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithSearchResult:(id)arg1;
- (void)sendInChatScriptCommand:(id)arg1;
- (void)declineInvitationScriptCommand:(id)arg1;
- (void)acceptInvitationScriptCommand:(id)arg1;
- (id)objectSpecifier;
- (id)scriptUpdated;
- (id)scriptStarted;
- (id)scriptActive;
- (id)scriptJoinState;
- (id)scriptInvitation;
- (id)scriptSecure;
- (id)scriptSubject;
- (id)scriptChatType;
- (id)scriptInvitationMessage;
- (id)scriptName;
- (id)scriptParticipants;
- (id)scriptService;
- (id)scriptID;

@end

