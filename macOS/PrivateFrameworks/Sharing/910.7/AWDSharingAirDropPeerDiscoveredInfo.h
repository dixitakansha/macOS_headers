//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Sharing/NSCopying-Protocol.h>

@class NSString;

@interface AWDSharingAirDropPeerDiscoveredInfo : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _awdlVersion;
    unsigned int _bluetoothDiscovery;
    unsigned int _bonjourDiscovery;
    unsigned int _bonjourResolveComplete;
    unsigned int _bonjourTXTRecordDiscovery;
    NSString *_browserID;
    int _errorCode;
    NSString *_errorDomain;
    unsigned int _identityQueryComplete;
    NSString *_modelCode;
    NSString *_modelName;
    unsigned int _platform;
    int _rssi;
    NSString *_sessionID;
    unsigned int _tcpConnectionComplete;
    unsigned int _tlsHandshakeComplete;
    unsigned int _totalDiscovery;
    BOOL _verifiableIdentity;
    struct {
        unsigned int timestamp:1;
        unsigned int awdlVersion:1;
        unsigned int bluetoothDiscovery:1;
        unsigned int bonjourDiscovery:1;
        unsigned int bonjourResolveComplete:1;
        unsigned int bonjourTXTRecordDiscovery:1;
        unsigned int errorCode:1;
        unsigned int identityQueryComplete:1;
        unsigned int platform:1;
        unsigned int rssi:1;
        unsigned int tcpConnectionComplete:1;
        unsigned int tlsHandshakeComplete:1;
        unsigned int totalDiscovery:1;
        unsigned int verifiableIdentity:1;
    } _has;
}

@property(retain, nonatomic) NSString *browserID; // @synthesize browserID=_browserID;
@property(nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned int awdlVersion; // @synthesize awdlVersion=_awdlVersion;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) BOOL verifiableIdentity; // @synthesize verifiableIdentity=_verifiableIdentity;
@property(nonatomic) unsigned int totalDiscovery; // @synthesize totalDiscovery=_totalDiscovery;
@property(nonatomic) unsigned int identityQueryComplete; // @synthesize identityQueryComplete=_identityQueryComplete;
@property(nonatomic) unsigned int tlsHandshakeComplete; // @synthesize tlsHandshakeComplete=_tlsHandshakeComplete;
@property(nonatomic) unsigned int tcpConnectionComplete; // @synthesize tcpConnectionComplete=_tcpConnectionComplete;
@property(nonatomic) unsigned int bonjourResolveComplete; // @synthesize bonjourResolveComplete=_bonjourResolveComplete;
@property(nonatomic) unsigned int bonjourTXTRecordDiscovery; // @synthesize bonjourTXTRecordDiscovery=_bonjourTXTRecordDiscovery;
@property(nonatomic) unsigned int bonjourDiscovery; // @synthesize bonjourDiscovery=_bonjourDiscovery;
@property(nonatomic) unsigned int bluetoothDiscovery; // @synthesize bluetoothDiscovery=_bluetoothDiscovery;
@property(retain, nonatomic) NSString *modelCode; // @synthesize modelCode=_modelCode;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasBrowserID;
@property(nonatomic) BOOL hasPlatform;
@property(nonatomic) BOOL hasAwdlVersion;
@property(nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasErrorDomain;
@property(nonatomic) BOOL hasRssi;
@property(nonatomic) BOOL hasVerifiableIdentity;
@property(nonatomic) BOOL hasTotalDiscovery;
@property(nonatomic) BOOL hasIdentityQueryComplete;
@property(nonatomic) BOOL hasTlsHandshakeComplete;
@property(nonatomic) BOOL hasTcpConnectionComplete;
@property(nonatomic) BOOL hasBonjourResolveComplete;
@property(nonatomic) BOOL hasBonjourTXTRecordDiscovery;
@property(nonatomic) BOOL hasBonjourDiscovery;
@property(nonatomic) BOOL hasBluetoothDiscovery;
@property(readonly, nonatomic) BOOL hasModelCode;
@property(readonly, nonatomic) BOOL hasModelName;
@property(readonly, nonatomic) BOOL hasSessionID;
@property(nonatomic) BOOL hasTimestamp;

@end

