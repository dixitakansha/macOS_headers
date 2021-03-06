//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVConference/VCObject.h>

@class NSMutableDictionary, NSNumber;
@protocol VCControlChannelTransactionDelegate;

__attribute__((visibility("hidden")))
@interface VCControlChannelDialog : VCObject
{
    unsigned int _sessionID;
    unsigned int _transactionID;
    NSNumber *_participantID;
    id <VCControlChannelTransactionDelegate> _weakTransactionDelegate;
    NSMutableDictionary *_transactions;
}

+ (BOOL)processMessageFromParticipant:(id)arg1 transactionID:(id)arg2 status:(unsigned int)arg3 sessionID:(unsigned int)arg4 transactionDelegate:(id)arg5;
+ (void)sendConfirmationToParticipantID:(id)arg1 transactionID:(id)arg2 sessionID:(unsigned int)arg3 transactionDelegate:(id)arg4;
+ (BOOL)sendUnreliableMessage:(id)arg1 sessionID:(unsigned int)arg2 participantID:(id)arg3 transactionDelegate:(id)arg4;
+ (id)newEncryptedMessageFromMessage:(id)arg1 sequenceNumber:(unsigned short)arg2 transactionDelegate:(id)arg3;
+ (BOOL)encryptMessage:(id)arg1 buffer:(char *)arg2 size:(unsigned int)arg3 sequenceNumber:(unsigned short)arg4 transactionDelegate:(id)arg5;
- (BOOL)processMessageFromParticipant:(id)arg1 transactionID:(id)arg2 status:(unsigned int)arg3;
- (BOOL)sendReliableMessage:(id)arg1 transactionDelegate:(id)arg2;
- (void)removeTransactionForTransactionID:(int)arg1;
- (void)flushActiveDialogs;
- (void)dealloc;
- (id)initWithSessionID:(unsigned int)arg1 participantID:(id)arg2 transactionDelegate:(id)arg3;

@end

