//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface SFCSR : NSObject
{
    NSData *_csrData;
    char *_csrDer;
    unsigned int _csrDerLength;
    NSString *_commonName;
    NSString *_emailAddress;
    struct cssm_key _publicKey;
    NSMutableArray *_rfc822Names;
    NSMutableArray *_dnsNames;
    NSMutableArray *_uriNames;
    NSMutableArray *_ipAddrs;
    NSMutableArray *_crlDistrbutionPoints;
}

+ (id)_extensionName;
+ (BOOL)_isValidCSRFileExtension:(id)arg1;
- (id).cxx_construct;
- (id)_crlDistrbutionPoints;
- (id)_ipAddrs;
- (id)_dnsNames;
- (id)_uriNames;
- (id)_rfc822Names;
- (id)_userEmailAddress;
- (id)_userCommonName;
- (id)_csrData;
- (struct cssm_key *)_publicKey;
- (void)dealloc;
- (id)initWithCSR:(id)arg1 clHandle:(long long)arg2;
- (void)parseAttribute:(const void *)arg1 len:(unsigned long long)arg2;
- (void *)parseCRLDistribPointsEntry:(const void *)arg1 len:(unsigned long long)arg2;
- (void)parseDistributionPointNameEntry:(const void *)arg1 len:(unsigned long long)arg2;
- (void *)parseSubjectAltNameEntry:(const void *)arg1 len:(unsigned long long)arg2;
- (void)_setCSRData:(id)arg1;
- (id)initWithFileName:(id)arg1 clHandle:(long long)arg2;

@end

