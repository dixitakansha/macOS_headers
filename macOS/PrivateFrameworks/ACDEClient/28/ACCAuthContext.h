//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ACDEClient/ACCAuthContextProtocol-Protocol.h>

@class ACFMessage, ACFPrincipal, NSData, NSDate, NSMutableDictionary, NSNumber, NSString;

@interface ACCAuthContext : NSObject <ACCAuthContextProtocol>
{
    ACFMessage *_request;
    ACFPrincipal *_principal;
    NSString *_appIDKey;
    NSString *_dsKeyVersion;
    NSString *_nonce;
    NSString *_encryptionHash;
    NSString *_oldUserKey;
    NSString *_currentUserKey;
    NSString *_sessionToken;
    NSString *_tokenVersion;
    NSNumber *_appID;
    NSDate *_creationDate;
    NSDate *_expirationDate;
    NSData *_encryptionKey;
    NSData *_initializationVector;
    NSNumber *_authenticationType;
    NSString *_twoStepVerificationCode;
    NSNumber *_personID;
    NSString *_selectedDeviceId;
    NSString *_selectedDeviceType;
    NSString *_serviceName;
    NSString *_recoveryKey;
    NSString *_clientSecretTokenHmac;
    NSNumber *_clientSecretCreateDate;
    NSNumber *_touchIDSupport;
}

+ (id)authContextWithRequest:(id)arg1;
@property(retain, nonatomic) NSNumber *touchIDSupport; // @synthesize touchIDSupport=_touchIDSupport;
@property(retain, nonatomic) NSNumber *clientSecretCreateDate; // @synthesize clientSecretCreateDate=_clientSecretCreateDate;
@property(retain, nonatomic) NSString *clientSecretTokenHmac; // @synthesize clientSecretTokenHmac=_clientSecretTokenHmac;
@property(retain, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *selectedDeviceType; // @synthesize selectedDeviceType=_selectedDeviceType;
@property(retain, nonatomic) NSString *selectedDeviceId; // @synthesize selectedDeviceId=_selectedDeviceId;
@property(retain, nonatomic) NSNumber *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSString *twoStepVerificationCode; // @synthesize twoStepVerificationCode=_twoStepVerificationCode;
@property(retain) NSString *tokenVersion; // @synthesize tokenVersion=_tokenVersion;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(retain, nonatomic) NSData *initializationVector; // @synthesize initializationVector=_initializationVector;
@property(retain) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) ACFPrincipal *principal; // @synthesize principal=_principal;
@property(retain) NSString *currentUserKey; // @synthesize currentUserKey=_currentUserKey;
@property(retain) NSString *oldUserKey; // @synthesize oldUserKey=_oldUserKey;
@property NSNumber *authenticationType; // @synthesize authenticationType=_authenticationType;
@property(retain) NSString *encryptionHash; // @synthesize encryptionHash=_encryptionHash;
@property(retain) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain) ACFMessage *request; // @synthesize request=_request;
@property(retain) NSString *appIDKey; // @synthesize appIDKey=_appIDKey;
@property(retain) NSNumber *appID; // @synthesize appID=_appID;
@property(retain) NSString *dsKeyVersion; // @synthesize dsKeyVersion=_dsKeyVersion;
- (id)strippedPropertyListString:(id)arg1;
@property(readonly, nonatomic) NSString *tokenSourceString;
@property(readonly, nonatomic) NSString *xmlTokenSourceString;
@property(readonly, nonatomic) NSMutableDictionary *parametersDictionary;
@property(retain) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

