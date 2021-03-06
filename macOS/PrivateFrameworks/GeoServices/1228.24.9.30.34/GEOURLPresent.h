//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOURLOptions, NSMutableArray;

@interface GEOURLPresent : PBCodable <NSCopying>
{
    NSMutableArray *_items;
    GEOURLOptions *_options;
}

+ (Class)itemType;
@property(retain, nonatomic) GEOURLOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasOptions;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)addItem:(id)arg1;
- (void)clearItems;
- (void)dealloc;
- (id)initWithDirectionsOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;

@end

