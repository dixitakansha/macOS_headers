//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface KNMacPlaybackDisplayAllocationTable : NSObject <NSCopying>
{
    NSArray *_allocationRecords;
}

@property(readonly, nonatomic) NSArray *allocationRecords; // @synthesize allocationRecords=_allocationRecords;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)allocationRecordForDisplayIDs:(id)arg1;
- (id)allocationTableByAddingOrUpdatingRecord:(id)arg1;
@property(readonly, nonatomic) id propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithAllocationRecords:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

