//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDReviewFilter : PBCodable <NSCopying>
{
    CDStruct_13868713 *_photoSizeFilters;
    unsigned long long _photoSizeFiltersCount;
    unsigned long long _photoSizeFiltersSpace;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setPhotoSizeFilters:(CDStruct_13868713 *)arg1 count:(unsigned long long)arg2;
- (CDStruct_13868713)photoSizeFilterAtIndex:(unsigned long long)arg1;
- (void)addPhotoSizeFilter:(CDStruct_13868713)arg1;
- (void)clearPhotoSizeFilters;
@property(readonly, nonatomic) CDStruct_13868713 *photoSizeFilters;
@property(readonly, nonatomic) unsigned long long photoSizeFiltersCount;
- (void)dealloc;

@end

