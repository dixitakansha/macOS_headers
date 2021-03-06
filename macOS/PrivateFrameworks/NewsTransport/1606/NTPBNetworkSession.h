//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBNetworkSession : PBCodable <NSCopying>
{
    unsigned long long _sessionID;
    int _cellularRadioAccessTechnology;
    BOOL _wifiReachable;
    struct {
        unsigned int sessionID:1;
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int wifiReachable:1;
    } _has;
}

@property(nonatomic) int cellularRadioAccessTechnology; // @synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology;
@property(nonatomic) BOOL wifiReachable; // @synthesize wifiReachable=_wifiReachable;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCellularRadioAccessTechnology;
@property(nonatomic) BOOL hasWifiReachable;
@property(nonatomic) BOOL hasSessionID;

@end

