//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLaneInfo : PBCodable <NSCopying>
{
    NSMutableArray *_arrows;
    BOOL _hov;
    BOOL _preferredForMultipleManeuvers;
    BOOL _supportsManeuver;
    struct {
        unsigned int hov:1;
        unsigned int preferredForMultipleManeuvers:1;
        unsigned int supportsManeuver:1;
    } _has;
}

+ (Class)arrowType;
@property(retain, nonatomic) NSMutableArray *arrows; // @synthesize arrows=_arrows;
@property(nonatomic) BOOL hov; // @synthesize hov=_hov;
@property(nonatomic) BOOL preferredForMultipleManeuvers; // @synthesize preferredForMultipleManeuvers=_preferredForMultipleManeuvers;
@property(nonatomic) BOOL supportsManeuver; // @synthesize supportsManeuver=_supportsManeuver;
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
- (id)arrowAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrowsCount;
- (void)addArrow:(id)arg1;
- (void)clearArrows;
@property(nonatomic) BOOL hasHov;
@property(nonatomic) BOOL hasPreferredForMultipleManeuvers;
@property(nonatomic) BOOL hasSupportsManeuver;

@end

