//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPRecoveryKeyValidatorInernal-Protocol.h>

@class CDPContext, NSString;
@protocol CDPDRecoveryKeyValidatorInternalDelegate;

@interface CDPDRecoveryKeyValidatorImpl : NSObject <CDPRecoveryKeyValidatorInernal>
{
    CDPContext *_context;
    id <CDPDRecoveryKeyValidatorInternalDelegate> _delegate;
    BOOL _recoveryKeyVerified;
    NSString *_recoveryKey;
}

@property(copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(nonatomic) BOOL recoveryKeyVerified; // @synthesize recoveryKeyVerified=_recoveryKeyVerified;
- (void).cxx_destruct;
- (void)generateRecoveryKey:(CDUnknownBlockType)arg1;
- (void)confirmRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

